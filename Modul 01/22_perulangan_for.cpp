#include <iostream>
using namespace std;

int main() {
    int jumlah;

    cout << "Jumlah perulangan: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "Perulangan ke-" << i + 1 << endl;
    }

    return 0;
}
