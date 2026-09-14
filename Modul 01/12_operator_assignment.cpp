#include <iostream>
using namespace std;

int main() {
    int nilai = 10;

    nilai += 5;   // nilai = nilai + 5
    cout << "Setelah += 5 : " << nilai << endl;

    nilai -= 3;   // nilai = nilai - 3
    cout << "Setelah -= 3 : " << nilai << endl;

    nilai *= 2;   // nilai = nilai * 2
    cout << "Setelah *= 2 : " << nilai << endl;

    nilai /= 4;   // nilai = nilai / 4
    cout << "Setelah /= 4 : " << nilai << endl;

    nilai %= 3;   // nilai = nilai % 3
    cout << "Setelah %= 3 : " << nilai << endl;

    return 0;
}
