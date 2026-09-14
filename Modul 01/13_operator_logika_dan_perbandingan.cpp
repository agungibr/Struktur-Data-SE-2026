#include <iostream>
using namespace std;

int main() {
    int nilai;
    char pilihan;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Operator perbandingan: >, <, >=, <=, ==, !=
    cout << boolalpha;
    cout << "Nilai >= 75 : " << (nilai >= 75) << endl;
    cout << "Nilai == 100: " << (nilai == 100) << endl;

    cout << "Masukkan pilihan (Y/N): ";
    cin >> pilihan;

    // && = AND, || = OR, ! = NOT
    bool lulus = nilai >= 75;
    bool setuju = (pilihan == 'Y' || pilihan == 'y');

    cout << "Lulus  : " << lulus << endl;
    cout << "Setuju : " << setuju << endl;
    cout << "Tidak lulus: " << !lulus << endl;

    return 0;
}
