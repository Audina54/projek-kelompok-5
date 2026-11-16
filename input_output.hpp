#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"
#include <iomanip> 



//                      MENU
void menu () {
    cout << "\n============= Menu =============\n";
    cout << "1. Menambah data sumber belajar\n";
    cout << "2. Menampilkan data sumber belajar\n";
    cout << "3. Mencari data sumber belajar\n";
    cout << "4. Keluar\n";
    cout << "================================.\n";
    cout << "pilih (1-4) : ";
}

void menu_menampilkanData() {
    cout << "\n======== Menampilkan Data Sumber Belajar =========\n";
    cout << "1. Tampilkan seluruh data\n";
    cout << "2. Tampilkan data dengan rating tertinggi dan terendah\n";
    cout << "3. Tampilkan data dengan durasi terpanjang dan terpendek\n";
    cout << "4. Kembali\n";
    cout << "===================================================\n";
    cout << "pilih(1-4) : ";
}

void menu_tampilkan() {
    cout << "\n======= Tampilkan Seluruh Data =======\n";
    cout << "1. Tampilkan data (terkelompok tingkat kesulitan)\n";
    cout << "2. Tampilkan data urut rating\n";
    cout << "3. Tampilkan data urut durasi waktu\n";
    cout << "4. Kembali\n";
    cout << "======================================\n";
    cout << "pilih (1-4) : ";

}

void menu_urut() {
    cout << "\n==== Urut =====\n";
    cout << "1. Ascending\n";
    cout << "2. Descending\n";
    cout << "3. Kembali\n";
    cout << "===============\n";
    cout << "pilih (1-3) : ";
    
}

void menu_cariData () {
    cout << "\n======= Cari Data =======\n";
    cout << "1. Berdasarkan ID\n";
    cout << "2. Berdasarkan Judul\n";
    cout << "3. Berdasarkan Kategori\n";
    cout << "4. Berdasarkan Durasi Waktu\n";
    cout << "5. Kembali\n";
    cout << "=========================\n";
    cout << "pilih (1-5) : ";
}

void menu_kategori () {
    cout << "\n==== Kategori ====\n";
    cout << "1. buku\n";
    cout << "2. catatan\n";
    cout << "3. tutorial\n";
    cout << "4. video_pembelajaran\n";
    cout << "5. online_course\n";
    cout << "==================.\n";
    cout << "pilih (1-5) : ";
}

void menu_tingkat () {
    cout << "\n===== Tingkat Kesulitan =====\n";
    cout << "1. Mudah\n";
    cout << "2. Sedang\n";
    cout << "3. Sulit\n";
    cout << "=============================.\n";
    cout << "pilih (1-3) : ";
}


//                      INPUT
int baca_angka (int min, int max) {
    int angka;
    cin >> angka;

    while (cin.fail() || angka < min || angka > max) {
        cin.clear();             // hapus status error cin
        cin.ignore(1000, '\n');  // buang input yang salah
        cout << "Input salah! Masukkan angka " << min << " - " << max << " : ";
        cin >> angka;
    }
    return angka;
}

double baca_desimal (double min, double max) {
    double angka;
    cin >> angka;

    while (cin.fail() || angka < min || angka > max) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Input salah! Masukkan angka " << min << " - " << max << " : ";
        cin >> angka;
    }
    return angka;
}

string nama_kategori (int pilihan) {
    if (pilihan == 1) return "buku";
    if (pilihan == 2) return "catatan";
    if (pilihan == 3) return "tutorial";
    if (pilihan == 4) return "video_pembelajaran";
    return "online_course";
}

void input (data_sumber &belajar, int n) {
    int pilih;

    belajar.id = n + 1;

    cout << "===== Menambah data sumber belajar =====\n";
    cout << "Judul (1 kata, pakai _ untuk spasi) : ";
    cin >> belajar.judul;

    // kategori
    menu_kategori();
    pilih = baca_angka(1, 5);
    belajar.kategori = nama_kategori(pilih);

    // tingkat kesulitan
    menu_tingkat();
    pilih = baca_angka(1, 3);
    if (pilih == 1) {
        belajar.tingkat_kesulitan = "mudah";
    }
    else if (pilih == 2) {
        belajar.tingkat_kesulitan = "sedang";
    }
    else {
        belajar.tingkat_kesulitan = "sulit";
    }

    // rating dan waktu
    cout << "Rating (1-5) = ";
    belajar.rating = baca_desimal(1, 5);

    cout << "Durasi belajar (menit) = ";
    belajar.waktu = baca_angka(1, INT_MAX);

    cout << "\nData berhasil ditambahkan (ID " << belajar.id << ").\n";
}



//                      OUTPUT
void header () {
    cout << "\n========================================================================================================\n";
    cout << left << setw(7) << "ID"
         << left << setw(26) << "JUDUL"
         << left << setw(25) << "KATEGORI"
         << left << setw(25) << "TINGKAT KESULITAN"
         << left << setw(13) << "RATING"
         << left << setw(13) << "WAKTU";
    cout << "\n========================================================================================================\n";
}

// Menampilkan 1 baris data
void view_baris (data_sumber belajar) {
    cout << left << setw(7) << belajar.id
         << left << setw(26) << belajar.judul
         << left << setw(25) << belajar.kategori
         << left << setw(25) << belajar.tingkat_kesulitan
         << left << setw(13) << belajar.rating
         << left << setw(13) << belajar.waktu << endl;
}

// Menampilkan isi array dari index 0 sampai n-1.
void view_arr (data_sumber belajar[], int n) {
    if (n == 0) {
        cout << "(tidak ada data)\n";
    }
    for (int i = 0; i < n; i++) {
        view_baris(belajar[i]);
    }
}

// Menampilkan data yang tingkat kesulitannya sama dengan "tingkat" (mudah / sedang / sulit)
void view_terkelompokan (string tingkat, data_sumber belajar[], int n) {
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        if (belajar[i].tingkat_kesulitan == tingkat) {
            view_baris(belajar[i]);
            jumlah++;
        }
    }
    if (jumlah == 0) {
        cout << "(tidak ada data)\n";
    }
}