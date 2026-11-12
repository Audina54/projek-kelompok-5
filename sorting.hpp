#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"

void bubu_sort(data_sumber belajar[], int jumlah, string properties){
    for (int i = 0; i < jumlah; i++){
        for (int j = i+1; j < jumlah; j++){
            if (properties == "rating") {
                if (belajar[i].rating > belajar[j].rating) {
                    data_sumber temp = belajar[j];
                    belajar[j] = belajar[i];
                    belajar[i] = temp;
                }
            }
            if (properties == "waktu") {
                if (belajar[i].waktu > belajar[j].waktu){
                    data_sumber temp = belajar[j];
                    belajar[j] = belajar[i];
                    belajar[i] = temp;
                }
            }
        }
    }
}





