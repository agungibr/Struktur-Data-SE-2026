#include <iostream>
using namespace std;

int main() {
    int jumlah;
    int i = 1;

    cout << "Masukkan banyak baris: ";
    cin >> jumlah;

    do {
        cout << "Baris ke-" << i << endl;
        i++;
    } while (i <= jumlah);

    return 0;
}
