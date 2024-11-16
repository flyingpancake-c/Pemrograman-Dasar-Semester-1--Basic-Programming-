#include <iostream>
using namespace std;

int main() {
    int umur, jumlahPengunjung, hargatotal;
    int totalGratis = 0, totalAnak = 0, totalRemaja = 0, totalDewasa = 0, totalLansia = 0;
    int hargaAnak = 15000, hargaRemaja = 25000, hargaDewasa = 35000;
    int totalHargaAnak = 0, totalHargaRemaja = 0, totalHargaDewasa = 0;

    cout << "Masukkan jumlah pengunjung: ";
    cin >> jumlahPengunjung;

    for (int i = 0; i < jumlahPengunjung; i++) {
        cout << "Masukkan umur pengunjung ke-" << i + 1 << ": ";
        cin >> umur;

        if (umur <= 6) {
            cout << "Gratis" << endl;
            totalGratis++;
        } else if (umur >= 7 && umur < 13) {
            cout << "Rp " << hargaAnak << endl;
            totalAnak++;
            totalHargaAnak += hargaAnak;
        } else if (umur >= 13 && umur <= 17) {
            cout << "Rp " << hargaRemaja << endl;
            totalRemaja++;
            totalHargaRemaja += hargaRemaja;
        } else if (umur >= 18 && umur < 60) {
            cout << "Rp " << hargaDewasa << endl;
            totalDewasa++;
            totalHargaDewasa += hargaDewasa;
        } else if (umur >= 60) {
            cout << "Gratis" << endl;
            totalLansia++;
        }
    }

    cout << "\nRingkasan:\n";
    cout << "Jumlah pengunjung anak dibawah 7 tahun (<= 6 tahun): " << totalGratis << " (Gratis)" << endl;
    cout << "Jumlah pengunjung anak-anak (7-12 tahun): " << totalAnak << " (Total: Rp " << totalHargaAnak << ")" << endl;
    cout << "Jumlah pengunjung remaja (13-17 tahun): " << totalRemaja << " (Total: Rp " << totalHargaRemaja << ")" << endl;
    cout << "Jumlah pengunjung dewasa (18-54 tahun): " << totalDewasa << " (Total: Rp " << totalHargaDewasa << ")" << endl;
    cout << "Jumlah pengunjung lansia (>= 55 tahun): " << totalLansia << " (Gratis)" << endl;
    hargatotal = totalHargaAnak + totalHargaDewasa + totalHargaRemaja;
    cout << "Jumlah yang harus dibayar : Rp " << hargatotal << endl;

    return 0;
}
