#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include <iostream>
using namespace std;

struct data_sumber {
    int id, waktu;
    double rating;
    string judul, kategori, tingkat_kesulitan;
};

data_sumber belajar[100];