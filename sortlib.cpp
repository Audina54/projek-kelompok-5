#include <iostream>

using namespace std;

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

int bin_search(int arr[], int dicari){
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int mid = low + (high - low) / 2;

    while (low <= high){
    if (arr[mid] == dicari){
        return mid;
    } else if (arr[mid] < dicari){
        low = mid + 1;
    } else {
        low = mid - 1;
    }
    
    }
    
    return -1;
}

int main (){
int a [] = {5, 7, 8, 9, 3, 6, 1, 0};

int jumlah = sizeof(a) / sizeof(a[0]);

cout << "Array unsorted : ";
for (int i = 0; i < jumlah; i++){
    cout << a[i];
    cout << ", ";
}

bubu_sort(a, jumlah);



cout << "\n\nHasil sorting : ";
for (int i = 0; i < jumlah; i++){
    cout << a[i];
    cout << ", ";
}
}