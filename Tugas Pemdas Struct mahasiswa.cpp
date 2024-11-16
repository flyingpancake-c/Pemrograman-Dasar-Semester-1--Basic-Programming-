
/*
// Struct untuk data mahasiswa
struct Mahasiswa {
    char nama[50];
    char NIM[15];
    char jenisKelamin[10];
    float IPK;
};

// Fungsi untuk mengurutkan mahasiswa berdasarkan IPK tertinggi
void urutkanMahasiswa(struct Mahasiswa mhs[], int n) {
    struct Mahasiswa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mhs[i].IPK < mhs[j].IPK) {
                temp = mhs[i];
                mhs[i] = mhs[j];
                mhs[j] = temp;
            }
        }
    }
}

// Fungsi untuk menampilkan 3 mahasiswa dengan IPK tertinggi
void tampilkanMahasiswaTertinggi(struct Mahasiswa mhs[], int n) {
    printf("\nData 3 Mahasiswa dengan IPK Tertinggi:\n");
    printf("=====================================\n");
    for (int i = 0; i < 3 && i < n; i++) {
        printf("Peringkat %d:\n", i + 1);
        printf("Nama         : %s\n", mhs[i].nama);
        printf("NIM          : %s\n", mhs[i].NIM);
        printf("Jenis Kelamin: %s\n", mhs[i].jenisKelamin);
        printf("IPK          : %.2f\n\n", mhs[i].IPK);
    }
}

int main() {
    struct Mahasiswa mahasiswa[MAKS_MAHASISWA];
    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa (maksimum 15): ");
    scanf("%d", &jumlahMahasiswa);

    if (jumlahMahasiswa > MAKS_MAHASISWA) {
        printf("Jumlah mahasiswa tidak boleh lebih dari 15.\n");
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukkan data mahasiswa ke-%d:\n", i + 1);
        printf("Nama         : ");
        scanf(" %[^\n]s", mahasiswa[i].nama);
        printf("NIM          : ");
        scanf(" %[^\n]s", mahasiswa[i].NIM);
        printf("Jenis Kelamin: ");
        scanf(" %[^\n]s", mahasiswa[i].jenisKelamin);
        printf("IPK          : ");
        scanf("%f", &mahasiswa[i].IPK);
    }

    // Urutkan mahasiswa berdasarkan IPK
    urutkanMahasiswa(mahasiswa, jumlahMahasiswa);

    // Tampilkan 3 mahasiswa dengan IPK tertinggi
    tampilkanMahasiswaTertinggi(mahasiswa, jumlahMahasiswa);

    return 0;
} */


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string NIM;
    string jenisKelamin;
    float IPK;
};

int main() {
    int JM; 
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> JM;
    vector<Mahasiswa> datamahasiswa(JM);

    // Input data mahasiswa
    for (int i = 0; i < JM; i++) {
        cout << "Masukkan data mahasiswa ke-" << (i + 1) << ": " << endl;
        cout << "Nama: ";
        cin >> datamahasiswa[i].nama; 
        cout << "NIM: ";
        cin >> datamahasiswa[i].NIM;
        cout << "Jenis Kelamin: ";
        cin >> datamahasiswa[i].jenisKelamin;
        cout << "IPK (Skala 4): ";
        cin >> datamahasiswa[i].IPK;
        cout << endl;
    }


    // Mengurutkan mahasiswa berdasarkan IPK tertinggi
    sort(datamahasiswa.begin(), datamahasiswa.end(), [](const Mahasiswa &a, const Mahasiswa &b) {
        return a.IPK > b.IPK; // Urutkan dari yang tertinggi
    });

    // Menampilkan 3 mahasiswa dengan IPK tertinggi
    cout << "===================================" << endl;
    cout << "3 Mahasiswa dengan IPK tertinggi: " << endl;
    cout << "===================================" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Peringkat ke " << (i + 1) << ": " << endl;
        cout << "Nama: " << datamahasiswa[i].nama << endl;
        cout << "NIM: " << datamahasiswa[i].NIM << endl;
        cout << "Jenis Kelamin: " << datamahasiswa[i].jenisKelamin << endl;
        cout << "IPK: " << datamahasiswa[i].IPK << endl;
        cout << endl;
    }
    cout << "===================================" << endl;

    return 0;
}



