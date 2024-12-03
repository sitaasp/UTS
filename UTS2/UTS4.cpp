#include <iostream>
using namespace std;

// fungsi untuk penjumlahan
int tambah(int a, int b);

// fungsi untuk perkalian
int kali(int a, int b);

// (fungsi void) untuk pengurangan
void kurang(int a, int b);

// (fungsi void) untuk pembagian
void bagi(int a, int b);

int main() {
    int pilihan, num1, num2;

    while (true) {
        // Menampilkan menu
        cout << "Menu:\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Keluar\n";
        cout << "Masukkan menu  pilihan anda: ";
        cin >> pilihan;

        // Keluar jika user memilih
        if (pilihan == 5) {
            break;
        }

        // Meminta input angka dari pengguna
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        // Melakukan operasi yang dipilih
        switch (pilihan) {
            case 1: {
                // Memanggil fungsi penjumlahan
                int hasil = tambah(num1, num2);
                cout << "Hasil Penjumlahan: " << hasil << endl;
                break;
            }
            case 2: {
                // Memanggil prosedur pengurangan
                kurang(num1, num2);
                break;
            }
            case 3: {
                // Memanggil fungsi perkalian
                int hasil = kali(num1, num2);
                cout << "Hasil Perkalian: " << hasil << endl;
                break;
            }
            case 4: {
                // Memanggil prosedur pembagian
                bagi(num1, num2);
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
            }
        }

        cout << endl;
    }

    return 0;
}

// fungsi untuk penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// fungsi untuk perkalian
int kali(int a, int b) {
    return a * b;
}

// prosedur untuk pengurangan
void kurang(int a, int b) {
    int hasil = a - b;
    cout << "Hasil Pengurangan: " << hasil << endl;
}

// prosedur untuk pembagian
void bagi(int a, int b) {
    if (b != 0) {
        double hasil = static_cast<double>(a) / b;
        cout << "Hasil Pembagian: " << hasil << endl;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}
