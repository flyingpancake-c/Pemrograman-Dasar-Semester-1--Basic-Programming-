#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// int main() {
//     int n;
//     cout << "Masukkan Jumlah anak yang membeli : ";
//     cin >> n; // Untuk membaca jumlah anak yang membeli permen

//     int totalPermen = 0; // inisialisasi total permen
//     int i = 0; // inisialisasi loop
//     while (i < n) { // Untuk membaca jumlah permen masing-masing anak
//         int permen;
//         cout << "Masukkan jumlah permen yang dibeli setiap anak : ";
//         cin >> permen; // memebaca jumlah permen yang dibeli oleh masing-masing anak
//         totalPermen += permen; // menambahkan jumlah permen ke total 
//         ++i;
//     }

//     cout << totalPermen << endl; // output total permen 
//     return 0;
// }


int main() {
    // Deklarasikan input dan masukkan jumlah n (Anaknya)
   int n, p, tp;
    cout << "Masukkan jumlah anak yang membeli permen : ";
    cin >> n;
    
    // Inisialisasi jumlah permen
    tp = 0;
    
    // Inisialisasi loop
    int i = 0;
    
    // Dibawah ini untuk memasukkan nilai permen yang dibeli oleh beberapa anak mengunakan loop while 
    while (i < n){
        cout << "Masukkan jumlah permen yang dibeli setiap anak : ";
        cin >> p;
        
        // Ini untuk menambahkan jumlah permen yang dibeli oleh setiap anak
        tp += p;
        i++;
    }
    
    cout << tp << endl;
        
    return 0;
}
