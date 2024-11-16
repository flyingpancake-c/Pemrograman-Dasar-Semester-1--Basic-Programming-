#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// proses sederhana dari inisialisasi variabel dan penambahan nilai ke variabel tersebut
// int main() {
//     int x;
//     cout << "Masukkan nilai x : ";
//     cin >> x;
//     x += 5;
//     cout << x << endl;
// }



int main() {
    // string greeting
    // string greeting = "Hello";
    // cout << greeting;

    
    // string nama depan dan belakang tapi ini nyambung nggak ada spasinya. Jadi mending pake getline daripada ini
    // string firstName;
    // cout << "Masukkan nama depanmu : ";
    // cin >> firstName;
    // string lastName;
    // cout << "Masukkan nama belakangmu : ";
    // cin >> lastName;
    // cout << firstName + lastName;

    
    // buat ngitung jumlah huruf pada sebuah kalimat atau paragraf
    // string txt;
    // cout << "Masukkan kata, paragraf, atau kalimat yang kamu ingin ketahui jumlah katanya : ";
    // getline (cin, txt);
    // cout <<  txt.length();

    
    // Untuk mencari nilai tertinggi, terkecil, mean, median, modus dari sebuah data
    // int x;
    // cout << "Masukkan jumlah data yang ingin kamu masukkan: ";
    // cin >> x;
    
    // vector<int> data(x); // menggunakan vektor untuk menyimpan data

    // for (int i = 0; i < x; i++) {
    //     cout << "Masukkan data ke-" << i + 1 << ": ";
    //     cin >> data[i];
    // }

    // int maxData = *max_element(data.begin(), data.end()); // mencari nilai maksimum
    // cout << "Nilai maksimum: " << maxData << endl;

    // int minData = *min_element(data.begin(), data.end()); // Mnecari nilai minimum
    // cout << "Nilai minimum: " << minData << endl;

    // Menghitung nilai rata-rata
    // double sum = 0;  // sum digunakan untuk menyimpan jumlah total dari semua elemen dalam vektor.
    // for (int i = 0; i < x; i++) {    //Loop for digunakan untuk menambahkan setiap nilai dari vektor data ke dalam sum.
    //     sum += data[i];
    // }
    // double avg = sum / x; // untuk mencari rata-ratanya
    // cout << "Nilai rata-rata: " << avg << endl;

    // Menghitung nilai median
    // sort(data.begin(), data.end()); // untuk mengurutkan elemen dalam vektor data
    // double median;
    // if (x % 2 == 0) {  // untuk mengecek Jika jumlah elemen x genap, median adalah rata-rata dari dua nilai tengah
    //     median = (data[x/2 - 1] + data[x/2]) / 2.0;
    // } else {
    //     median = data[x/2]; //Jika jumlah elemen x ganjil, median adalah nilai tengah pada indeks x/2
    // }
    // cout << "Nilai mediannya: " << median << endl;

    // Menghitung modus
    // map<int, int> frequency;  // frequency adalah map yang digunakan untuk melacak frekuensi kemunculan setiap nilai dalam vektor data
    // for (int i = 0; i < x; i++) {  // Loop pertama for menambah nilai frekuensi setiap elemen dalam data
    //     frequency[data[i]]++;
    // }
    // int mode = data[0];
    // int maxCount = 0;
    // for (const auto& pair : frequency) {  // Loop kedua for mencari nilai dengan frekuensi kemunculan tertinggi (modus)
    //     if (pair.second > maxCount) {   // mode menyimpan nilai dari elemen yang paling sering muncul, sedangkan maxCount menyimpan frekuensi tertinggi yang ditemukan
    //         maxCount = pair.second;
    //         mode = pair.first;
    //     }
    // }
    // cout << "Modusnya adalah: " << mode << endl;

}