#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int p, l, L, K;

    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;

    if (p < 1 || l < 1) {
        cout << "Error: Panjang dan lebar harus bilangan positif!" << endl;
    } else if (p == l) {
        L = p * l;
        K = p * 4;
        cout << "Luas: " << L << endl;
        cout << "Keliling: " << K << endl;
        cout << "Tipe: Persegi" << endl;
    } else {
        L = p * l;
        K = 2 * (p + l);
        cout << "Luas: " << L << endl;
        cout << "Keliling: " << K << endl;
        cout << "Tipe: Persegi Panjang" << endl;
    }

    return 0;
}
