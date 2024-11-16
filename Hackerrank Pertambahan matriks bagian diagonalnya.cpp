#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Masukkan ukuran matriks (N): ";
    cin >> N;

    // Membuat matriks N x N
    vector<vector<int>> matriks(N, vector<int>(N));

    // Membaca nilai-nilai matriks
    cout << "Masukkan nilai-nilai matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriks[i][j];
        }
    }

    // Menghitung total nilai pada diagonal utama
    int totalDiagonal = 0;
    for (int i = 0; i < N; i++) {
        totalDiagonal += matriks[i][i]; // Elemen diagonal utama
    }

    // Menampilkan total nilai pada diagonal utama
    cout << "Total nilai pada diagonal utama: " << totalDiagonal << endl;

    return 0;
}