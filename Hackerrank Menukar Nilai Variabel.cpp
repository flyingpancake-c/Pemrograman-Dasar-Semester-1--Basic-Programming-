#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int PA; // Deklarasi panjang array
    cin >> PA; // Membaca panjang array

    int array[10]; // Deklarasi array dengan ukuran maksimal 10, sesuai constraint

    // Membaca nilai-nilai dalam array
    for (int i = 0; i < PA; i++) {
        cin >> array[i];
    }

    int indeks1, indeks2;
    cin >> indeks1 >> indeks2; // Membaca dua indeks yang nilainya akan ditukar

    // Menukar nilai menggunakan pointer
    int *ptr1 = &array[indeks1];
    int *ptr2 = &array[indeks2];

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    // Menampilkan array setelah penukaran
    for (int i = 0; i < PA; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
