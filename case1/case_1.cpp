#include <iostream>
#include <cmath> // Untuk fungsi perpangkatan pow()

using namespace std;

// 1. y = a^3 + 7

void soalsatu() {
    double a;
    cout << "=== Nomor 1: y = a^3 + 7 ===" << endl;
    cout << "Masukkan nilai a: ";
    cin >> a;

    double y = a * (a * a) + 7.0;
    cout << "Hasil y = " << y << "\n\n";
}

// 2. y = a*(x^2) + b*x + c
void soaldua() {
    double a, b, c, x;
    cout << "=== Nomor 2: y = ax^2 + bx + c ===" << endl;
    cout << "Masukkan nilai a: "; cin >> a;
    cout << "Masukkan nilai b: "; cin >> b;
    cout << "Masukkan nilai c: "; cin >> c;
    cout << "Masukkan nilai x: "; cin >> x;

    double y = (a * x + b) * x + c;
    cout << "Hasil y = " << y << "\n\n";
}

// 3. rata rata lima bilangan
void soaltiga() {
    double angka, jumlah = 0.0;
    cout << "=== Nomor 3: Jumlah & Rata-rata 5 Bilangan ===" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> angka;
        jumlah += angka;
    }

    double rataRata = jumlah / 5.0;

    cout << "a. Total Jumlah : " << jumlah << endl;
    cout << "b. Rata-rata    : " << rataRata << "\n\n";
}

// 4. konversi dari celcius
void soalempat() {
    double celcius;
    cout << "=== Nomor 4: Konversi Suhu ===" << endl;
    cout << "Masukkan suhu dalam Celcius (C): ";
    cin >> celcius;

    double fahrenheit = 32.0 + (9.0 / 5.0) * celcius;
    double kelvin = 273.0 + celcius;
    double reamur = celcius * (4.0 / 5.0);

    cout << "a. Celcius ke Fahrenheit : " << fahrenheit << " F" << endl;
    cout << "b. Celcius ke Kelvin     : " << kelvin << " K" << endl;
    cout << "c. Celcius ke Reamur     : " << reamur << " R" << endl;
}

int main() {
    // calling function
    soalsatu();
    soaldua();
    soaltiga();
    soalempat();

    return 0;
}