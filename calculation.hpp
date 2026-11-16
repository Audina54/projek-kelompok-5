#pragma once
#include "struct.hpp"
#include <string>

double mean(data_sumber belajar[], int jumlah , string properties);
double findmax(data_sumber belajar[], int jumlah,  string properties);
double findmin(data_sumber belajar[], int jumlah,  string properties);
double totaltime(data_sumber belajar[], int jumlah);

double totaltime(data_sumber belajar[], int jumlah)
{
    if(jumlah <= 0) {
        return 0;
    }
    
    return belajar[jumlah - 1].waktu + totaltime(belajar , jumlah-1);
}

// Menghitung Mean
double mean(data_sumber belajar[], int jumlah , string properties)
{
    if (jumlah == 0) return 0;
    double sum = 0;
    double mean = 0;
    
        if(properties == "rating") {
            for(int i = 0 ; i < jumlah ; i++) {
                sum += belajar[i].rating;
            }
        }
        else if(properties == "waktu") {
            sum = totaltime(belajar, jumlah);
        }
    
    mean = sum/jumlah;
    return mean;
}

// Tertinggi Terendah
double findmax(data_sumber belajar[], int jumlah,  string properties)
{
    double max = 0;    
    // Find minimum value
    for(int i = 0 ; i < jumlah ; i++) {
        if(properties == "rating") {
            if(max < belajar[i].rating) {
                max = belajar[i].rating;
            }
        }
        else if(properties == "waktu") {
            if(max < belajar[i].waktu) {
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
    for(int i = 0 ; i < jumlah ; i++) {
        if(properties == "rating") {
            if(min > belajar[i].rating) {
                min = belajar[i].rating;
            }
        }
        else if(properties == "waktu") {
            if(min > belajar[i].waktu) {
                min = belajar[i].waktu;
            }
        }
    }
    return min;
}





