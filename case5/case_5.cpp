#include <iostream>
using namespace std;

typedef struct {
    int x;
    int y;
} nilai;

int main() {
    nilai n1; // Membuat variabel n1 dari tipe struct nilai

    // Mengisi nilai untuk anggota struct
    n1.x = 5;
    n1.y = 10;

    // Menampilkan nilai anggota struct
    cout << "Nilai x = " << n1.x << endl;
    cout << "Nilai y = " << n1.y << endl;

    return 0;
}

// penjelasan dari perbedaan struct dan typedef struct kalo struct bertugas membuat tipe data/struktur baru dengan mengelompokkan beberapa variabel yang berbeda menjadi satu kesatuan, sedangkan typedef struct digunakan untuk memberikan alias atau nama baru pada tipe data struct yang sudah ada. Dengan menggunakan typedef struct, kita dapat membuat nama baru untuk tipe data struct sehingga lebih mudah digunakan dan dibaca dalam kode program.