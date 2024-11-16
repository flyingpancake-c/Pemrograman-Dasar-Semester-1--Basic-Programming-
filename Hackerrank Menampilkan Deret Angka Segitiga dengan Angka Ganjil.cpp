#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    int oddNumber = 1;

    for (int i = 1; i <= n; i++) { // loop untuk setiap baris
        for (int j = 1; j <= i; j++) { // loop untuk setiap angka dalam baris
            cout << oddNumber << " ";
            oddNumber += 2; // menambah 2 untuk mendapatkan angka ganjil berikutnya
        }
        cout << endl; // pindah ke baris berikutnya
    }

    return 0;
}
