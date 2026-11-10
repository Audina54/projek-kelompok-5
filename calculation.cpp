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
vector<string> max(mahasiswa data[], string properties)
{
    int min = 0;
    vector<string> minoutput = [];
    // Find 
    for(int i = 0 ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            if(min > data[i].rating)
            {
                min = data[i].rating;
            }
        }
        elseif(properties == "waktu")
        {
            if(min > data[i].waktu)
            {
                min = data[i].waktu;
            }
        }
    }
    for(int i = 0 ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            if(data[i].rating == min)
            {
                minoutput.push_back(data[i].rating);
            }
        }
        elseif(properties == "waktu")
        {
            if(data[i].waktu == min)
            {
                minoutput.push_back(data[i].waktu);
            }
        }
    }
    return minoutput;
}

vector<string> min(mahasiswa data[], string properties)
{
    int max = 0;
    vector<string> maxoutput = [];
    for(int i ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            if(max < data[i].rating)
            {
                max = data[i].rating;
            }
        }
        elseif(properties == "waktu")
        {
            if(max < data[i].waktu)
            {
                max = data[i].waktu;
            }
        }
    }
    for(int i = 0 ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            if(data[i].rating == max)
            {
                maxoutput.push_back(data[i].rating);
            }
        }
        elseif(properties == "waktu")
        {
            if(data[i].waktu == max)
            {
                maxoutput.push_back(data[i].waktu);
            }
        }
    }
    return maxoutput;
}




