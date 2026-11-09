#include "calculatio.hpp"
#include <string>

struct mahasiswa{
    int id;
    string judul;
    string kategori;
    string tingkat;
    int rating;
    int waktu;

}
// properties = [rating, waktu]


// Menghitung Mean
double mean(mahasiswa data[], string properties)
{
    double sum = 0;
    double mean = 0;
    for(int i ; i < data.lenght() ; i++)
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
array terrendah(mahasiswa data[], string properties)
{
    int min = 0;
    for(int i ; i < data.lenght() ; i++)
    {
        if(properties == "rating")
        {
            if(min < data[i].rating)
            {
                min = data[i].rating;
            }
        }
        elseif(properties == "waktu")
        {
            if(min < data[i].waktu)
            {
                min = data[i].waktu;
            }
        }
    }



    return mean;
}


