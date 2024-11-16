#include <iostream>
using namespace std;

int main(){
    int total;
    cout << "Masukkan total belanja: ";
    cin >> total;

    if(total > 100000){
        cout << "Selamat! anda dapat hadiah!" <<endl;
    }
    cout << "Terimakasih sudah berbelanja :)" <<endl;
    return 0;
}