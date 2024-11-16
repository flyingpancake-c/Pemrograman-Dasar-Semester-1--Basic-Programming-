#include <iostream>
using namespace std;

int main() {
    string Nama = "Bpk Affan", Kelurahan = "Skibidi";
    int pawal = 8000;
    int pakhir = 9000;
    int bb = 140;
    int ppj = 10;
    int pbi = pakhir - pawal;
    int tl = bb*pbi;
    int ppj10 = tl/ppj;
    int tb = tl + ppj10;
    cout << "Program penghitung pemakaian listrik sederhana" << endl;
    cout << "===================PLN Skibidi===================" << endl;
    cout << "Nama : " << Nama << endl;
    cout << "Kelurahan : " << Kelurahan << endl;
    cout << "Pemakaian bulan ini : " << pbi << "Kwh meter" << endl;
    cout << "Tarif listrik : Rp " << tl << ",-" << endl;
    cout << "PPJ 10% : Rp " << ppj10 << ",-" << endl;
    cout << "Total bayar : Rp " << tb << ",-" << endl;
    cout << "==============================================" << endl;
    return 0;
}
