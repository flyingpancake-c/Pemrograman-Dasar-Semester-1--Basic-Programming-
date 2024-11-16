#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;

public:
    void setinfo(string n, int u) {
        name = n;
        age = u;

    }
    void displayinfo() {
    cout << "Nama: " << name << endl;
    cout << "Umur: " << age << " tahun" << endl;
    }
};

class Student : public Person{
private:
    string studentID;
    float Grade;

public:
    void setstudentinfo(string id, float g) {
        studentID = id;
        Grade = g;
    }
    void displaystudentinfo() {
        displayinfo();
        cout << "NIM: " << studentID << endl;
        cout << "Nilai: " << Grade << endl;
    }
};

int main() {
    Student Mahasiswa;
    Mahasiswa.setinfo("Afif Rafi Ardiyanto", 19);
    Mahasiswa.setstudentinfo("245150307111026", 100);
    Mahasiswa.displaystudentinfo();
    
    return 0;
}