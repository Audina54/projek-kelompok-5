#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"
#include <fstream>
#include <iomanip>

void load (int &n) {
    ifstream out("data.txt");
    if (!out) return;
    while(out >> belajar[n].id >> belajar[n].judul >> belajar[n].kategori >> belajar[n].tingkat_kesulitan >> belajar[n].rating >> belajar[n].waktu) {
        n++;
    }
    out.close();
        
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