#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"

void search_int (data_sumber belajar[], int n, string properties, int target) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        if (properties == "id") {
            if (belajar[i].id == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
        }
        if (properties == "waktu") {
            if (belajar[i].waktu == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
        }
    }            
    if (jumlah == 0) {
        cout << "(data tidak ditemukan)\n";
    }
}

void search_durasiBelajar () {
// pprint yang (belajar[].waktu <= target)
}

void search_rating () {

}

void search_string () {

}

int bin_search(int arr[], int ukuran, int dicari){
    int low = 0;
    int high = ukuran - 1;
    int mid;    

    while (low <= high){
    
    mid = low + (high - low) / 2;

    if (arr[mid] == dicari){
        return mid;
    } else if (arr[mid] < dicari){
        low = mid + 1;
    } else {
        high = mid - 1;
    }
    
    }

    return -1;
}

