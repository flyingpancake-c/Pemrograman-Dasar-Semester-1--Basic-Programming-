#include <iostream>
using namespace std;

int main() {
    //Declare
    const float pi= 3.14;
    float r;
    float L;
    float K;

    //Perhitungan Luas
    cout << "Masukkan jari-jarinya: ";
    cin >> r;
    L = pi * r * r;
    K = 2*pi*r;
    cout << "Luasnya adalah: " << L << endl;
    cout << "Kelilingnya adalah: " << K << endl;
    return 0;
}