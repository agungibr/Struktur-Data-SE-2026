#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int x;
    int y;

    // Mengisi nilai
    x = 20;
    y = 6;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Nilai variabel dapat berubah
    x = 50;

    cout << "Setelah x diubah:" << endl;
    cout << "x = " << x << endl;

    // Deklarasi sekaligus inisialisasi
    int a = 10;
    int b = 5;

    cout << "a + b = " << a + b << endl;

    return 0;
}
