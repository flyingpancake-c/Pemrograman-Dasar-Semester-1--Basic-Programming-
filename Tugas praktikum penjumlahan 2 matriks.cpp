#include <iostream>
using namespace std;

// Fungsi untuk menjumlahkan dua matriks
void jumlahMatriks(int matriksA[10][10], int matriksB[10][10], int hasil[10][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j]; // menjumlahkan matriksnya
        }
    }
}

// Fungsi untuk menampilkan matriks
void keluarMatriks(int matriks[10][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriksA[10][10], matriksB[10][10], hasil[10][10]; // deklarasi matriks A & B & hasil
    int baris, kolom;

    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> baris >> kolom;

    cout << "Masukkan elemen matriks A:" << endl; // untuk memasukkan elemen matriks A
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriksA[i][j];
        }
    }

    cout << "Masukkan elemen matriks B:" << endl; // untuk memasukkan elemen matriks B
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriksB[i][j];
        }
    }

    // Menjumlahkan matriks A dan B
    jumlahMatriks(matriksA, matriksB, hasil, baris, kolom);

    cout << "Hasil penjumlahan matriks A dan B:" << endl;
    keluarMatriks(hasil, baris, kolom);

    return 0;
}
/* Afif Rafi Ardiyanto Nim: 245150307111026 */