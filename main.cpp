#include <conio.h>
#include "struct.hpp"
#include "input_output.hpp"
#include "load_save_file.hpp"
#include "calculation.hpp"
#include "searching.hpp"
#include "sorting.hpp"

void tampilkan_seluruh_data (data_sumber belajar[], int n);
void menampilkan_data_sumber (data_sumber belajar[], int n);
void cari_data (data_sumber belajar[], int n);

int main () {
    int pilihan;
    int n = 0;
    load(n);
    do {
    menu ();
    pilihan = baca_angka(1, 4);
    system("cls");

    switch(pilihan) {
        case 1 :
            input(belajar[n], n);
            save(belajar[n]);
            n++;
            cout << "\nenter untuk lanjut..";
            getch();
            system("cls");
            break;

        case 2 :
            menampilkan_data_sumber(belajar, n);
            break;

        case 3 : 
            cari_data(belajar, n);
            break;

        case 4 :
            break;

        default :
            cin.clear();
            cin.ignore(1000, '\n');
            break;
    }
    
    }while (pilihan!=4);
}



void tampilkan_seluruh_data (data_sumber belajar[], int n) {
    int pilihan;
    do {
        menu_tampilkan();
        pilihan = baca_angka(1, 4);
        system("cls");
        switch(pilihan) {
            case 1 :
                cout << "SUMBER BELAJAR TERKELOMPOK TINGKAT KESULITAN\n";
                cout << "TINGKAT KESULITAN : MUDAH";
                header();
                view_terkelompokan("mudah", belajar, n);
                cout << endl;
                cout << "TINGKAT KESULITAN : SEDANG";
                header();
                view_terkelompokan("sedang", belajar, n);
                cout << endl;
                cout << "TINGKAT KESULITAN : SULIT";
                header();
                view_terkelompokan("sulit", belajar, n);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 2 :
                cout << "\nDATA SUMBER BELAJAR TERURUT RATING";
                header();
                bubble_sort(belajar, n, "rating");
                view_arr(belajar, n);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 3 :
                cout << "\nDATA SUMBER BELAJAR TERURUT DURASI WAKTU";
                header();
                bubble_sort(belajar, n, "waktu");
                view_arr(belajar, n);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 4 :
                system("cls");
                break;

            default :
                cin.clear();
                cin.ignore(1000, '\n');
                break;
        }
    } while (pilihan != 4);
}


void menampilkan_data_sumber (data_sumber belajar[], int n) {
    int pilihan;
    int jumlah;
    double max_rating, min_rating;
    int max_waktu, min_waktu;
    do {
        cout << "rata-rata rating       = ";
        cout << setprecision(3) << mean(belajar, n, "rating");
        cout << endl;
        cout << "rata-rata durasi waktu = ";
        cout << setprecision(3) << mean(belajar, n, "waktu");
        cout << endl;
        menu_menampilkanData();
        pilihan = baca_angka(1, 4);
        system("cls");
        switch(pilihan) {
            case 1 :
                tampilkan_seluruh_data(belajar, n);
                break;

            case 2 :
                cout << "\nDATA SUMBER BELAJAR DENGAN RATING TERTINGGI";
                header();
                max_rating = findmax(belajar, n, "rating"); 
                search_rating(belajar, n, max_rating);
                cout << "\nDATA SUMBER BELAJAR DENGAN RATING TERENDAH";
                header();
                min_rating = findmin(belajar, n, "rating"); 
                search_rating(belajar, n, min_rating);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 3 :
                cout << "\nDATA SUMBER BELAJAR DENGAN DURASI WAKTU TERPANJANG";
                header();
                max_waktu = findmax(belajar, n, "waktu"); 
                search_int(belajar, n, "waktu", max_waktu);
                cout << "\nDATA SUMBER BELAJAR DENGAN DURASI WAKTU TERPENDEK";
                header();
                min_waktu = findmin(belajar, n, "waktu"); 
                search_int(belajar, n, "waktu", min_waktu);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 4 :
                system("cls");
                break;

            default :
                cin.clear();
                cin.ignore(1000, '\n');
                break;

        }
    }while(pilihan != 4);
}

void cari_data (data_sumber belajar[], int n) {
    int pilihan;
    int jumlah;
    string judul;
    string kategori;
    do {
        menu_cariData();
        pilihan = baca_angka(1, 5);
        system("cls");
        switch (pilihan) {
            case 1 :
                int id;
                cout << "ID : ";
                id = baca_angka(1, INT_MAX);
                header();
                search_int(belajar, n, "id", id);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 2 :
                cout << "Judul (1 kata, pakai _ untuk spasi) : ";
                cin >> judul;
                header();
                search_string(belajar, n, "judul", judul);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 3 :
                int pilih_kategori;
                menu_kategori();
                pilih_kategori = baca_angka(1, 5);
                kategori = nama_kategori(pilih_kategori);
                cout << endl;
                cout << "Kategori : " << kategori;
                header();
                search_string(belajar, n, "kategori", kategori);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");

                break;

            case 4 :
                int durasi;
                cout << "Berapa durasi waktu belajar yang anda miliki (dalam menit) : ";
                durasi = baca_angka(0, INT_MAX);
                cout << "\nDengan durasi waktu " << durasi << " menit anda bisa mempelajari sumber belajar : ";
                header();
                search_durasiBelajar(belajar, n, durasi);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 5 :
                system("cls");
                break;

            default :
                cin.clear();
                cin.ignore(1000, '\n');
                break;

        }
    } while(pilihan != 5);
}