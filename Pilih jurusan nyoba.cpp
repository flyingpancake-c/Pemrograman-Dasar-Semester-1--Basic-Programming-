#include <iostream>
using namespace std;

int main() {
    string jurusan[] = {
        "Teknik Informatika",
        "Teknik Komputer",
        "Teknik Elektro",
        "Teknik Mesin",
        "Teknik Sipil",
        "Teknik Kimia",
        "Teknik Industri",
        "Teknik Lingkungan",
        "Teknik Perkapalan",
        "Teknik Penerbangan",
        "Teknik Nuklir",
        "Teknik Geologi",
        "Teknik Pertambangan",
        "Teknik Perminyakan",
        "Teknik Metalurgi",
        "Teknik Fisika",
        "Teknik Biomedis",
        "Teknik Telekomunikasi",
        "Teknik Material",
        "Teknik Sistem Energi"
    };

    cout << "Pilih jurusan yang kamu inginkan :" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << i + 1 << ". " << jurusan[i] << endl;
    }

    int pilihan;
    cout << "Masukkan pilihanmu (pakai angka ya) : ";
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= 20) {
        cout << "Kamu memilih " << jurusan[pilihan - 1] << ". Mampus kau dek masuk ke fakultas tersantai! " << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}


