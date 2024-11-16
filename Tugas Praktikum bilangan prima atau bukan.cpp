#include <iostream>
#include <cmath>
using namespace std;

bool ApakahBilanganPrima(int bilangan) {
    if (bilangan <= 1) return false;
    for (int i = 2; i <= sqrt(bilangan); i++) {
        if (bilangan % i == 0) return false; 
    }
    return true;
}

void CetakBilanganPrima() {
    cout << "Bilangan prima dari 1 - 100 adalah: " << endl;
    for (int i = 2; i <= 100; i++) {
        if (ApakahBilanganPrima (i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Masukkan sebuah angka: ";
    cin >> n;
    cout << "Angka " << n << " adalah " << (ApakahBilanganPrima(n) ? "Bilangan prima" : "Bukan bilangan prima") << endl;
    CetakBilanganPrima();
    return 0;
}
/* Afif Rafi Ardiyanto Nim: 245150307111026*/
