
#include <iostream>
using namespace std;

struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

struct DataRekam {
    char nama[31];
    Tanggal tglLahir;
};

void Struct() {
    cout << "=== STRUCT ===" << endl;

    DataRekam info;

    cout << "Nama: ";
    cin >> info.nama;

    cout << "Tanggal lahir: ";
    cin >> info.tglLahir.tanggal;

    cout << "Bulan lahir: ";
    cin >> info.tglLahir.bulan;

    cout << "Tahun lahir: ";
    cin >> info.tglLahir.tahun;

    cout << "\n--- Data ---" << endl;
    cout << "Nama: " << info.nama << endl;
    cout << "Tanggal lahir: "
         << info.tglLahir.tanggal << "-"
         << info.tglLahir.bulan << "-"
         << info.tglLahir.tahun << endl;

    cout << "\n--- Array of Struct ---" << endl;

    const int MAX = 3;

    struct DataSiswa {
        char nama[40];
        int nilai;
    };

    DataSiswa siswa[MAX];

    for (int i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> siswa[i].nama;
        cout << "Nilai : ";
        cin >> siswa[i].nilai;
    }

    cout << "\n===== DATA SISWA =====" << endl;

    for (int i = 0; i < MAX; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama  = " << siswa[i].nama << endl;
        cout << "Nilai = " << siswa[i].nilai << endl;
    }
}
