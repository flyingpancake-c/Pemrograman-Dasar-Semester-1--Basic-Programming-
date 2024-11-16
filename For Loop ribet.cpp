#include<iostream>
using namespace std;

int main() {
    int data1, data2, data3, data4, jumlah;
    float rerata;
    cout <<"Masukkan data minggu ke-1 : ";
    cin >> data1;
    cout <<"Masukkan data minggu ke-2 : ";
    cin >> data2;
    cout <<"Masukkan data minggu ke-3 : ";
    cin >> data3;
    cout <<"Masukkan data minggu ke-4 : ";
    cin >> data4;

    jumlah = data1 + data2 + data3 + data4;
    rerata = jumlah/4;
    cout << "Pengeluaranmu adalah : " << rerata << endl;
}