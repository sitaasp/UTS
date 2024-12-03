#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // sebelum pertukaran
    cout << "Sebelum pertukaran:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Logika pertukaran nilai
    if (a < b) {
    c = a;
    a = b;
    b = c;

    cout << "Nilai telah ditukar: a = " << a << ", b = " << b << endl;
    }
    else {
        cout << "Nilai tidak ditukar karena b tidak lebih besar dari a." << endl;
    }


 return 0;


    }
