#include "calculatio.hpp"
#include <string>
#include <vector>
using namespace std;

// Menghitung Mean
double mean(mahasiswa data[], string properties)
{
    double sum = 0;
    double mean = 0;
    for(int i = 0 ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            total += data[i].rating;
        }
        elseif(properties == "waktu")
        {
            total += data[i].waktu;
        }
    }
    mean = sum/data.lenght();
    return mean;
}

// Tertinggi Terrendah
vector<string> max(mahasiswa data[], int jumlah,  string properties)
{
    int max = 0;
    vector<string> maxoutput;
    // Find minimum value
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating")
        {
            if(max < data[i].rating)
            {
                max = data[i].rating;
            }
        }
        else if(properties == "waktu")
        {
            if(max < data[i].waktu)
            {
                max = data[i].waktu;
            }
        }
    }
    
    //Output
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating" && data[i].rating == max)
        {
            maxoutput.push_back(data[i].judul);
        }
        else if(properties == "waktu" && data[i].waktu == max)
        {
            maxoutput.push_back(data[i].judul);
        }
    }
    return maxoutput;
}

vector<string> min(mahasiswa data[], int jumlah,  string properties)
{
    int min = INT_MAX;
    vector<string> minoutput;
    // Find minimum value
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating")
        {
            if(min > data[i].rating)
            {
                min = data[i].rating;
            }
        }
        else if(properties == "waktu")
        {
            if(min > data[i].waktu)
            {
                min = data[i].waktu;
            }
        }
    }
    
    //Output
    for(int i = 0 ; i < jumlah ; i++)
    {
        if(properties == "rating" && data[i].rating == min)
        {
            minoutput.push_back(data[i].judul);
        }
        else if(properties == "waktu" && data[i].waktu == min)
        {
            minoutput.push_back(data[i].judul);
        }
    }
    return minoutput;
}




