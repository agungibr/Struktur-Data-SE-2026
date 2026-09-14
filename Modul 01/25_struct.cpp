#include <iostream>
#include <string>
using namespace std;

struct Tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

struct DataRekam {
    string nama;
    Tanggal tanggalLahir;
};

int main() {
    DataRekam info;

    cout << "Nama: ";
    cin >> info.nama;

    cout << "Tanggal lahir: ";
    cin >> info.tanggalLahir.tanggal;

    cout << "Bulan lahir: ";
    cin >> info.tanggalLahir.bulan;

    cout << "Tahun lahir: ";
    cin >> info.tanggalLahir.tahun;

    cout << "\nData:" << endl;
    cout << "Nama = " << info.nama << endl;
    cout << "Tanggal lahir = "
         << info.tanggalLahir.tanggal << "/"
         << info.tanggalLahir.bulan << "/"
         << info.tanggalLahir.tahun << endl;

    return 0;
}
