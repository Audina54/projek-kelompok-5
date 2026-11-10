#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"
#include <string>
#include <vector>


struct mahasiswa;

// Data ==> data array of struct 
// Jumlah ==> ukuran array of struct (sizeof(data)/ sizeof(data{0]))
// Properties ==> apa yang mau dicari "rating" or "waktu" berupa string
double mean(mahasiswa data[], int jumlah , string properties);
vector<string> max(mahasiswa data[], int jumlah,  string properties);
vector<string> min(mahasiswa data[], int jumlah,  string properties);








