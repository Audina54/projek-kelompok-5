#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h> //buat getch() -> gunanya biar ga langsung lanjut
using namespace std;

struct data_sumber {
    int id, waktu;
    double rating;
    string judul, kategori, tingkat_kesulitan;
};

data_sumber belajar[100];


void input (data_sumber &belajar, int n) {
    belajar.id = ++n;
    cout << "Judul (1 kata): ";
    cin >> belajar.judul;
    cout << "Kategori : ";
    cin >> belajar.kategori;
    cout << "Tingkat kesulitan : ";
    cin >> belajar.tingkat_kesulitan;
    cout << "Rating (1-5) : ";
    cin >> belajar.rating;
    cout << "Durasi waktu (menit) : ";
    cin >> belajar.waktu;
}


void save (data_sumber belajar) {
    ofstream in("data.txt", ios::app);

    if (in.is_open()) {
        in << left << setw(7) << belajar.id << left << setw(26);
        in << belajar.judul << left << setw(16);
        in << belajar.kategori << left << setw(25);
        in << belajar.tingkat_kesulitan << left << setw(13);
        in << belajar.rating << left << setw(13);
        in << belajar.waktu << endl;
    }
    else {
        cout << "File data.txt tidak ditemukan.";
    }
    
    in.close();
}


void menu () {
    cout << "\n============= Menu =============\n";
    cout << "1. Menambah data sumber belajar\n";
    cout << "2. Menampilkan data sumber belajar\n";
    cout << "3. Mencari data sumber belajar\n";
    cout << "4. Keluar\n";
    cout << "================================.\n";
    cout << "pilih (1-4) : ";
}

void load (int &n) {
    ifstream out("data.txt");
    if (!out) return;
    while(out >> belajar[n].id >> belajar[n].judul >> belajar[n].kategori >> belajar[n].tingkat_kesulitan >> belajar[n].rating >> belajar[n].waktu) {
        n++;
    }
    out.close();
        
}

void header () {
    cout << "\n====================================================================================================\n";
    cout << left << setw(7) << "ID" 
         << left << setw(26) << "JUDUL" 
         << left << setw(16) << "KATEGORI" 
         << left << setw(25) << "TINGKAT KESULITAN" 
         << left << setw(13) << "RATING" 
         << left << setw(13) << "WAKTU";    
    cout << "\n====================================================================================================\n";

}

void view () {
    ifstream out("data.txt");
    string buffer;
     if (out.is_open()) {
        while(getline(out, buffer)) {
            cout << buffer << endl;
        }
    }
    else {
        cout << "File data.txt tidak ditemukan.";
    }
     
    out.close();           
}

int main () {
    int n = 0;

    load(n);
    int pilihan;
    
    do {
        menu();
        cin >> pilihan;
        system("cls");
        switch(pilihan) {
            case 1 :
                cout << endl;
                input (belajar[n], n);
                save (belajar[n]);
                n++;
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 2 :
                header();
                view ();
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 3 :
                cout << "belum";
                break;

            case 4 :
                break;

            default :
                cin.clear();
                cin.ignore();
                break;
        }
    } while (pilihan != 4);

    return 0;

}