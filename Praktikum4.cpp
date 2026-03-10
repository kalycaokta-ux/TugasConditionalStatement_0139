#include <iostream>
using namespace std;

// Prosedur untuk memasukkan data
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m) : ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    }
}