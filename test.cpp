#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
using namespace std;

struct data_sumber {
    int id, waktu;
    double rating;
    string judul, kategori, tingkat_kesulitan;
};

data_sumber belajar[100];


void input (data_sumber &belajar, int n) {
    belajar.id = n + 1;
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

// save tanpa looping
// save -> simpan ke data.txt
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


void save_loop (data_sumber belajar[], int n ) {
    ofstream in("data.txt");

    for (int i = 0; i < n; i++) {
        if (in.is_open()) {
            in << left << setw(7) << belajar[i].id << left << setw(26);
            in << belajar[i].judul << left << setw(16);
            in << belajar[i].kategori << left << setw(25);
            in << belajar[i].tingkat_kesulitan << left << setw(13);
            in << belajar[i].rating << left << setw(13);
            in << belajar[i].waktu << endl;
        }
        else {
            cout << "File data.txt tidak ditemukan.";
        }
    }
    
    in.close();
}


void menu () {
    cout << "\n============= Menu =============\n";
    cout << "1. Menambah data sumber belajar\n";
    cout << "2. Menampilkan data sumber belajar\n";
    cout << "3. Menampilkan data sumber belajar terurut rating\n";
    cout << "4. Menampilkan data sumber belajar terkelompok kategori\n";
    cout << "5. Mencari data sumber belajar\n";
    cout << "6. Keluar\n";
    cout << "================================.\n";
    cout << "pilih (1-6) : ";
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


//view dari file txt
void view_file () {
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


//view dari array
void view_arr (data_sumber belajar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << left << setw(7) << belajar[i].id 
             << left << setw(26) << belajar[i].judul 
             << left << setw(16) << belajar[i].kategori  
             << left << setw(25) << belajar[i].tingkat_kesulitan  
             << left << setw(13) << belajar[i].rating 
             << left << setw(13) << belajar[i].waktu << endl;    
    }
}

void view_terkelompokan (string tingkat, data_sumber belajar[], int n) {
    for (int i = 0; i < n; i++) {
        if (belajar[i].tingkat_kesulitan == tingkat) {
        cout << left << setw(7) << belajar[i].id 
             << left << setw(26) << belajar[i].judul 
             << left << setw(16) << belajar[i].kategori  
             << left << setw(25) << belajar[i].tingkat_kesulitan  
             << left << setw(13) << belajar[i].rating 
             << left << setw(13) << belajar[i].waktu << endl;  

        }  
    }
}

void tukar (data_sumber &belajar1, data_sumber &belajar2) {
    data_sumber temp = belajar1;
    belajar1 = belajar2;
    belajar2 = temp;
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
                view_arr (belajar, n);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            case 3 :
                for (int i = 0; i < n-1; i++) {
                    for (int j = i+1; j < n; j++) {
                        if (belajar[i].rating > belajar[j].rating) {
                            tukar (belajar[i], belajar[j]);
                        }
                    }
                }
                cout << "SUMBER BELAJAR URUT RATING";
                header();
                view_arr(belajar, n);
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;
            
            case 4 :
                cout << "SUMBER BELAJAR TERKELOMPOK TINGKAT KESULITAN\n";
                cout << "TINGKAT KESULITAN = MUDAH";
                header();
                view_terkelompokan("mudah", belajar, n);
                
                cout << "\nTINGKAT KESULITAN = SEDANG";
                header();
                view_terkelompokan("sedang", belajar, n);

                cout << "\nTINGKAT KESULITAN = SULIT";
                header();
                view_terkelompokan("sulit", belajar, n);
                
                cout << "\nenter untuk lanjut..";
                getch();
                system("cls");
                break;

            
            case 5 :
                cout << "belum";
                break;

            case 6 :
                break;

            default :
                cin.clear();
                cin.ignore();
                break;
        }
    } while (pilihan != 6);

    return 0;

}