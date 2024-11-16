#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int umur;
    cout << "Masukkan umur pengunjung : ";
    cin >> umur;
    
    if (umur <= 6) {
        cout << "Gratis" << endl;
    }   else if (umur >= 6 && umur < 13) {
        cout << "Rp 15.000." << endl;
    }   else if (umur >= 13 && umur <= 17) { //umur 13 sampai 17
        cout << "Rp 25.000." << endl;
    }   else if (umur >= 18 && umur < 55) {
        cout << "Rp 35.000." << endl;
    }   else if (umur >= 55) {
        cout << "Gratis" << endl;
    }
  
        
    return 0;
}
