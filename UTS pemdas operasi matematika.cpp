#include <iostream>
#include <cmath>
using namespace std;

void persegi();
void persegipanjang ();
void Lingkaran();
void pangkat();
void ratarata();

int main() {
    cout << "Silahkan pilih perhitungan Matematis yang kamu butuhkan" << endl;
    cout << "1) Luas persegi  2) Luas persegi panjang  3) Luas lingkaran  4) x pangkat n  5) nilai rata-rata dari n bilangan " << endl;
    cout << "Masukkan pilihanmu : ";

    int m;
    cin >> m;

     if (m == 1) {
        persegi();
    } else if (m == 2) {
        persegipanjang();
    } else if (m == 3) {
        Lingkaran();
    } else if (m == 4) {
        pangkat();
    } else if (m == 5) {
        ratarata();
    } else {
        cout << "Ada-ada saja kamu ini wahai anak muda!" << endl;
    }

    return 0;
}

void persegi() {
    int S, LP;
    cout << "Masukkan panjang sisinya : ";
    cin >> S;
    LP = S*S;
    cout << LP << endl;
}

void persegipanjang() {
    int P, L, LPP;
    cout << "Masukkan panjangnya : ";
    cin >> P;
    cout << "Masukkan luasnya : ";
    cin >> L;
    LPP = P*L;
    cout << LPP << endl;
}

void Lingkaran() {
    const float pi= 3.14;
    float r;
    float L;

    cout << "Masukkan jari-jarinya: ";
    cin >> r;
    L = pi * r * r;
    cout << L << endl;
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

void ratarata() {
    int n;
    cout << "Masukkan jumlah nilainya : ";
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        float num;
        cout << "Masukkan bilangan ke-" << i+1 << " : ";
        cin >> num;
        sum += num;
    }
    float rata = sum / n;
    cout << rata << endl;
}