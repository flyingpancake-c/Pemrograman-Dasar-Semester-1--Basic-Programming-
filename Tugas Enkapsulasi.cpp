#include <iostream>
using namespace std;

class BankAccount{
private:
int balance = 2000000;

public:
void deposit(){
    int d;
    cout << "Masukkan jumlah saldo yang ingin anda depositkan: ";
    cin >> d;
    balance = balance + d;
    getbalance();
}
void withdraw(){
    int w;
    cout << "Masukkan jumlah saldo yang ingin anda tarik: ";
    cin >> w;
    
    if (w > balance){
        cout << "Saldo anda tidak cukup untuk melakukan penarikan!" << endl;
        getbalance();
    } else {
    balance = balance - w;
    cout << "Penarikan berhasil" << endl;
    getbalance();
    }
}
void getbalance(){
    cout << "Jumlah saldo anda sekarang adalah Rp." << balance << endl; 
}

};

int main(){
    int m, p;
    BankAccount Afif;

    do {
        cout << "Silahkan pilih menu yang anda butuhkan \n1. Deposit \n2. Penarikan \n3. Cek Saldo \nMasukkkan menu yang ingin anda gunakan: ";
        cin >> m;
        if (m == 1){
        Afif.deposit();
        } else if (m == 2) {
        Afif.withdraw();
        } else if (m == 3) {
        Afif.getbalance();
        }
        cout << "Apakah anda ingin melanjutkan proses?" << endl;
        cout << "1. Ya / 2. Tidak" << endl;
        cin >> p;
    } while (p == 1);
    return 0;
}