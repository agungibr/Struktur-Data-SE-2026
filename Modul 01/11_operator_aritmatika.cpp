#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Masukkan a: ";
    cin >> a;

    cout << "Masukkan b: ";
    cin >> b;

    cout << "Penjumlahan  : " << a + b << endl;
    cout << "Pengurangan  : " << a - b << endl;
    cout << "Perkalian    : " << a * b << endl;

    if (b != 0) {
        cout << "Pembagian    : " << a / b << endl;
    } else {
        cout << "Pembagian    : tidak bisa dibagi 0" << endl;
    }

    // Operator % digunakan untuk bilangan bulat.
    int x = 17;
    int y = 5;
    cout << "Sisa 17 / 5  : " << x % y << endl;

    return 0;
}
