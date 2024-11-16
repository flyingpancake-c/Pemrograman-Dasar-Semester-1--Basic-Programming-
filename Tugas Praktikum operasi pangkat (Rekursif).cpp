#include <iostream>
using namespace std;

int hasilPangkat(int m, int n) { // fungsi untuk menghitung hasil pangkat
    if (n == 1) return m;  // jika pangkat 1, maka hasilnya adalah m
     else return m * hasilPangkat (m, n - 1); // jika pangkat lebih dari 1, maka hasilnya adalah m dikalikan hasil pangkat m dengan fungsi rekursif
}

int main() {
    int m, n; 
    cout << "Masukkan nilai yang ingin dipangkatkan: ";
    cin >> m;
    cout << "Masukkan untuk nilai pangkatnya: ";
    cin >> n;
    cout << "Nilai pangkat dari " << m << " adalah: " << hasilPangkat(m, n) << endl;
}

/* Afif Rafi Ardiyanto Nim: 245150307111026*/