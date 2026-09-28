#include <iomanip> 
#include <iostream>

using namespace std;

int main() {
    double jam_kerja, jam_lembur, upah; // variabel untuk menyimpan input dari pengguna

    // meminta input dari pengguna
    cout << "masukkan total jam kerja: ";
    cin >> jam_kerja;
    cout << "masukkan total jam lembur: ";
    cin >> jam_lembur;
    cout << "masukkan upah per jam: ";
    cin >> upah;


    double upah_reguler = jam_kerja * upah; // menghitung upah reguler berdasarkan jam kerja dan upah per jam
    double presentase_lembur; // variabel untuk menyimpan persentase lembur

    // menentukan persentase lembur berdasarkan jumlah jam lembur
    if (jam_lembur >= 30) {
        presentase_lembur = 0.40;
    } else {
        presentase_lembur = 0.20;
    }

    // menghitung overpay dan total upah
    double overpay = (jam_kerja - jam_lembur) * upah * presentase_lembur;
    double totalUpah = upah_reguler + overpay;

    // menampilkan hasil perhitungan dengan format dua desimal
    cout << fixed << setprecision(2);
    cout << "Upah reguler: " << upah_reguler << endl;
    cout << "Bonus Lembur (" << presentase_lembur * 100 << "%): " << overpay << endl;
    cout << "Total upah: " << totalUpah << endl;

    return 0;
}