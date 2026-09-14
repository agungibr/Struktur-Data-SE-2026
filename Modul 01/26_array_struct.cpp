#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

struct DataSiswa {
    string nama;
    int nilai;
};

int main() {
    DataSiswa siswa[MAX];

    // Input data
    for (int i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1 << endl;

        cout << "Nama  = ";
        cin >> siswa[i].nama;

        cout << "Nilai = ";
        cin >> siswa[i].nilai;
    }

    // Output data
    cout << "\nData siswa" << endl;
    cout << "==========" << endl;

    for (int i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama  = " << siswa[i].nama << endl;
        cout << "Nilai = " << siswa[i].nilai << endl;
    }

    return 0;
}
