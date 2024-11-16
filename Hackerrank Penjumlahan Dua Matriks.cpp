#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int baris, kolom; // Deklarasi barisnya dan kolomnya
    cin >> baris >> kolom; // Memasukkan jumlah baris dan kolom untuk kedua matriks

    int matriks1[10][10], matriks2[10][10], hasil[10][10];

    // Input nilai untuk matriks pertama
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks1[i][j];
        }
    }

    // Input nilai untuk matriks kedua
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks2[i][j];
        }
    }

    // Menjumlahkan kedua matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    // Menampilkan hasil penjumlahan matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    /*
    # Kode untuk mengurangkan kedua matriks (opsional)
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }

    # Menampilkan hasil pengurangan matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    */

    return 0;
}
