#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    string hasil = (nilai >= 75) ? "Lulus" : "Tidak lulus";

    cout << hasil << endl;

    return 0;
}
