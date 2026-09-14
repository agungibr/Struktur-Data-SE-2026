#include <iostream>
using namespace std;

int main() {
    int kodeHari;

    cout << "Masukkan kode hari (1-7): ";
    cin >> kodeHari;

    switch (kodeHari) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Hari Kerja" << endl;
            break;

        case 6:
        case 7:
            cout << "Hari Libur" << endl;
            break;

        default:
            cout << "Kode masukan salah!" << endl;
            break;
    }

    return 0;
}
