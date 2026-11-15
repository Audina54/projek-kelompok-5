#pragma once
// Header Guard: Memastikan file header ini hanya dibaca 1 kali oleh compiler
// untuk mencegah error duplikasi data/fungsi saat di-include di file lain.

#include "struct.hpp"
#include "input_output.hpp"

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

void search_durasiBelajar (data_sumber belajar[], int n, int target) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        if (belajar[i].waktu <= target) {                
            view_baris(belajar[i]);  
            jumlah++;
        }
    }            
    if (jumlah == 0) {
        cout << "(data tidak ditemukan)\n";
    }
}

void search_rating (data_sumber belajar[], int n, double target) {
int jumlah = 0;
    for (int i = 0; i < n; i++) {
            if (belajar[i].rating == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
    }            
    if (jumlah == 0) {
        cout << "(data tidak ditemukan)\n";
    }
}

void search_string (data_sumber belajar[], int n, string properties, string target) {
int jumlah = 0;
    for (int i = 0; i < n; i++) {
        if (properties == "judul") {
            if (belajar[i].judul == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
        }
        if (properties == "kategori") {
            if (belajar[i].kategori == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
        }
        if (properties == "tingkat_kesulitan") {
            if (belajar[i].tingkat_kesulitan == target) {
                view_baris(belajar[i]);  
                jumlah++;
            }
        }
    }            
    if (jumlah == 0) {
        cout << "(data tidak ditemukan)\n";
    }
}