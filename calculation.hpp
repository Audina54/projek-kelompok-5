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
double mean(data_sumber belajar[], int jumlah , string properties);
double findmax(data_sumber belajar[], int jumlah,  string properties);
double findmin(data_sumber belajar[], int jumlah,  string properties);

// Menghitung Mean
double mean(data_sumber belajar[], int jumlah , string properties)
{
    if (jumlah == 0) return 0;
    double sum = 0;
    double mean = 0;
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating")
        {
            sum += belajar[i].rating;
        }
        else if(properties == "waktu")
        {
            sum += belajar[i].waktu;
        }
    }
    mean = sum/jumlah;
    return mean;
}

// Tertinggi Terendah
double findmax(data_sumber belajar[], int jumlah,  string properties)
{
    double max = 0;    
    // Find minimum value
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating")
        {
            if(max < belajar[i].rating)
            {
                max = belajar[i].rating;
            }
        }
        else if(properties == "waktu")
        {
            if(max < belajar[i].waktu)
            {
                max = belajar[i].waktu;
            }
        }
    }
    return max;
}

double findmin(data_sumber belajar[], int jumlah,  string properties)
{
    double min = INT_MAX;
    // Find minimum value
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating")
        {
            if(min > belajar[i].rating)
            {
                min = belajar[i].rating;
            }
        }
        else if(properties == "waktu")
        {
            if(min > belajar[i].waktu)
            {
                min = belajar[i].waktu;
            }
        }
    }
    return min;
}





