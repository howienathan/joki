#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // looping untuk memastikan b lebih besar dari a
    while ( a > b ) {
        b *= 2;
    }

    // looping dari b ke a dengan decrement
    for (int i = b; i >= a; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}