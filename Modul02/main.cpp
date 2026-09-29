#include <iostream>
using namespace std;

void materiArray();
void materiPointer();
void materiPointerArray();
void materiParameter();

int main() {
    int pilihan;
    do {
        cout << "\n========================================\n";
        cout << "       MODUL 2 - C++ BAGIAN KEDUA\n";
        cout << "========================================\n";
        cout << "1. Array\n";
        cout << "2. Pointer dan Alamat Memori\n";
        cout << "3. Pointer dan Array\n";
        cout << "4. Parameter Function\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: materiArray(); break;
            case 2: materiPointer(); break;
            case 3: materiPointerArray(); break;
            case 4: materiParameter(); break;
            case 0: cout << "Program selesai\n"; break;
            default: cout << "Pilihan tidak tersedia\n";
        }

        if (pilihan != 0) {
            cout << "\nTekan Enter untuk kembali ke menu";
            cin.ignore();
            cin.get();
        }
    } while (pilihan != 0);

    return 0;
}
