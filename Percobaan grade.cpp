#include <iostream>
using namespace std;

int main() {
    int nilai;
    string grade;
    cout << "Masukkan nilaimu: ";
    cin >> nilai;

    if (nilai >= 80) {
        grade = "A";
    } else if  (nilai >= 75) {
        grade = "B+";
    } else if (nilai >= 70) {
        grade = "B";
    } else if (nilai >= 65) {
        grade = "C+";
    } else if (nilai >= 55) {
        grade = "C";
    } else if (nilai >= 50) {
        grade = "D";
    } else if (nilai >= 0) {
        grade = "E";
    } else {
        grade = "K";
    }

    cout << "Grade kamu adalah: " << grade << endl;
    return 0;
}