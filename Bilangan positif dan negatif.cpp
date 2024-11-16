#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan sebuah angka : ";
    cin >> nilai;
    if (nilai > 0) {
        cout << "Bilangan positif";
    }
    else if (nilai < 0) {
        cout << "Bilangan negatif";
    }
    else {
        cout << "Bilangan nol" ;
    }
    return 0;
}