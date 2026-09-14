#include <iostream>
using namespace std;

int main() {
    int jumlah;
    int i = 1;

    cout << "Masukkan banyak baris: ";
    cin >> jumlah;

    while (i <= jumlah) {
        cout << "Baris ke-" << i << endl;
        i++;
    }

    return 0;
}
