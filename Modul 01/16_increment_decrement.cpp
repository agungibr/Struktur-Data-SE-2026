#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 10;

    // Pre-increment: naik dulu, baru digunakan.
    int hasilPre = 5 + ++a;

    // Post-increment: digunakan dulu, baru naik.
    int hasilPost = 5 + b++;

    cout << "Pre-increment:" << endl;
    cout << "a = " << a << endl;
    cout << "hasil = " << hasilPre << endl;

    cout << "\nPost-increment:" << endl;
    cout << "b = " << b << endl;
    cout << "hasil = " << hasilPost << endl;

    int c = 10;
    --c;
    cout << "\nSetelah --c, c = " << c << endl;

    return 0;
}
