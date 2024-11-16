#include <iostream>
using namespace std;

class Mahasiswa{
private:
    string nama;
    int umur;

public:
        void getNama (string nama){
            nama = nama;
        }
        string setNama(){
            return nama;
        }
        void getumur (int umur){
            umur = umur;
        }
        int setumur(){
            return umur;
        }
};

int main() {
    Mahasiswa mhs1;
    mhs1.setnama("John");
    mhs1.setumur(19);

    cout << "Nama: " << mhs1.getnama() << endl;
    cout << "Umur: " << mhs1.getumur() << endl;
}