#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
void luasPersegi();
void luasPersegiPanjang();
void luasLingkaran();
void pangkat();
void rataRata();

int main() {
    cout << "Silahkan pilih perhitungan Matematis yang kamu butuhkan" << endl;
    cout << "1) Luas persegi  2) Luas persegi panjang  3) Luas lingkaran  4) x pangkat n  5) nilai rata-rata dari n bilangan " << endl;

    int m;
    cin >> m;

    if (m == 1) {
        luasPersegi();
    } else if (m == 2) {
        luasPersegiPanjang();
    } else if (m == 3) {
        luasLingkaran();
    } else if (m == 4) {
        pangkat();
    } else if (m == 5) {
        rataRata();
    } else {
        cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}

void luasPersegi() {
    int S;
    cout << "Masukkan panjang sisinya: ";
    cin >> S;
    int LP = S * S;
    cout << "Luas persegi adalah: " << LP << endl;
}

void luasPersegiPanjang() {
    int p, l;
    cout << "Masukkan panjangnya: ";
    cin >> p;
    cout << "Masukkan lebarnya: ";
    cin >> l;
    int L = p * l;
    cout << "Luas persegi panjang adalah: " << L << endl;
}

void luasLingkaran() {
    const float pi = 3.14;
    float r;
    cout << "Masukkan jari-jarinya: ";
    cin >> r;
    float L = pi * r * r;
    cout << "Luas lingkaran adalah: " << L << endl;
}

void pangkat() {
    int x, n;
    cout << "Masukkan nilai x-nya: ";
    cin >> x;
    cout << "Masukkan nilai n-nya: ";
    cin >> n;
    int hasil = pow(x, n);
    cout << x << " pangkat " << n << " adalah: " << hasil << endl;
}

void rataRata() {
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        float num;
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> num;
        sum += num;
    }
    float rata = sum / n;
    cout << "Nilai rata-rata adalah: " << rata << endl;
}
