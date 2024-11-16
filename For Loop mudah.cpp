#include <iostream>
using namespace std;

int main() {
    int x, data, jumlah;
    float rerata;
    jumlah = 0;
    // for (x = 1; x <= 10; x++){
    //    cout << "Masukkan data minggu ke- " << x << ": ";
    //    cin >> data;
    //    jumlah = jumlah + data;
    //}
    // Yang atas versi asli atau versi for

    // Yang bawah ini versi while
    x = 1;
    while(x <= 4){
        cout << "Masukkan data minggu ke- " << x << ": ";
        cin >> data;
        jumlah = jumlah + data;
        x++;
    }
    rerata = jumlah/4;

    cout<< "Rata-rata dalam satu bulan adalah: " << rerata << endl;
    return 0;
}