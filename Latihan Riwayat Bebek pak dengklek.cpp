#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Masukkan hari: ";
    cin >> N;
    vector<int> ages; // Menyimpan umur bebek setiap hari
    int totalage = 0; // Menyimpan total umur untuk menhitung rata-rata

    for (int day = 0; day < N; day++) {
        int newduckage;
        cout << "Masukkan umur bebek yang baru: ";
        cin >> newduckage;

        // Tambahkan umur bebek yang baru
        ages.push_back(newduckage);
        totalage += newduckage;

        // Tambah 1 ke umur semua bebek yang ada
        for (int i = 0; i < ages.size(); i++) {
            ages[i]++;
        }
        totalage += ages.size () -1; // Semua umur bebek lama bertambah 1

        // Cari umur tertua dan termuda
        int minage = ages[0];
        int maxage = ages[0];
        for (int age : ages) {
            if (age < minage) minage = age;
            if (age > maxage) maxage = age; 
        }

        // Hitung rata-rata umur
        double averageage = static_cast <double> (totalage) / ages.size();

        // Tampilkan hasil
        cout << "Umur termuda adalah bebek: " << minage << " dan dengan umur tertua adalah: " << maxage << endl;
        cout << static_cast<int>(averageage * 10000) / 10000.0 << endl;
    }
}