#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

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

#include "struct.hpp"
