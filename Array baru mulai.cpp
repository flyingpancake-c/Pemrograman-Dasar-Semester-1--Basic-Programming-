#include <iostream>
using namespace std;

int main() {
    // int a[5];
    // int b[] = {1, 2, 3, 4, 5};
    // int i;
    
    // for(i = 0; i < 5; i++){
    //     cout << "Masukkan nilai a["<<i<<"] : ";
    //     cin a[];

    // }
    
    const int baris = 3;
    const int kolom = 3;

    int a[baris][kolom] = {{1, 2, 3},
                           {4,5, 6}
                           {7, 8, 9}}
    int b [baris][kolom] = {{9, 8, 7}
                            {6, 5, 4}
                            {3. 2, 1}}
    int c [baris][kolom];

    for (int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            c[i][j] = a[i][j]+ b[i][j];
        }
    }
        cout << "Hasil penjumlahan matriks : " << endl;
        for(int i = 0; i < baris; i++){
            for(int j = 0; j< kolom; j++){
                cout << c[i][j] << "    ";
            }
            cout << endl;
        }

        return 0;
}






    // Untuk menampilkan isi memory, kodingan ini biasanya berbeda di tiap device
    // int i;
    //for(i=0; i < 5; i++){
    //    cout << "a ["<<i<<"] = "<<a[i] << endl; 
    //}
// }