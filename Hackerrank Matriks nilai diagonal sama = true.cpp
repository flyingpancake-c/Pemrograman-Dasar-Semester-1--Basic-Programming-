#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    int matriks [10][10];
    cin >> N >> M;

    // Memeriksa apakah N dan M sama
    if (N != M) {
        cout << "ERROR" << endl;
        return 0;
    }

    // Membaca elemen matriks
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matriks[i][j];
        }
    }

    // Memeriksa elemen diagonal utama
    int diagonal = matriks[0][0];
    bool sama = true;

    for (int i = 1; i < N; ++i) {
        if (matriks[i][i] != diagonal) {
            sama = false;
            break;
        }
    }

    // Output hasil
    if (sama) {
        cout << "SAMA" << endl;
    } else {
        cout << "TIDAK SAMA" << endl;
    }

    return 0;
}