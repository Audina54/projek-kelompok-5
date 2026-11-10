#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

void bubu_sort(int arr[], int jumlah){
    for (int i = 0; i < jumlah; i++){
        for (int j = i+1; j < jumlah; j++){
            if (arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

#include "struct.hpp"



