#include <iostream>

using namespace std;

void Variable();
void Operator();
void Kondisional();
void Perulangan();
void Struct();
void Function();

int main(){
    int pilihan;

    do {
        cout << "\n========================================\n";
        cout << "       MODUL 1 - DASAR C++\n";
        cout << "========================================\n";
        cout << "1. Variable\n";
        cout << "2. Operator\n";
        cout << "3. Kondisional\n";
        cout << "4. Perulangan\n";
        cout << "5. Struct\n";
        cout << "6. Function\n";
        cout << "0. Keluar\n";
        cout << "----------------------------------------\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        cout << endl;

        switch (pilihan) {
        case 1:
            Variable();
            break;
        case 2:
            Operator();
            break;
        case 3:
            Kondisional();
            break;
        case 4:
            Perulangan();
            break;
        case 5:
            Struct();
            break;
        case 6:
            Function();
            break;
        case 0:
            cout << "Program Selesai\n";
            break;
        }

        if (pilihan != 0) {
            cout << "\nKlik Enter untuk kembali ke menu";
            cin.ignore();
            cin.get();
        }

    } while (pilihan != 0);
    return 0;
}
