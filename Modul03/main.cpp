#include <iostream>
#include "mahasiswa.h"
#include "pelajaran.h"
using namespace std;

int main() {
    int pilihan;
    do {
        cout << "\n========================================\n";
        cout << "        MODUL 3 - ABSTRACT DATA TYPE\n";
        cout << "========================================\n";
        cout << "1. ADT Mahasiswa\n";
        cout << "2. ADT Pelajaran\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: {
                mahasiswa mhs;
                inputMhs(mhs);
                cout << "Rata-rata = " << rata2(mhs) << endl;
                break;
            }
            case 2: {
                string namaMapel, kodeMapel;
                cout << "Nama mata pelajaran = ";
                cin.ignore();
                getline(cin, namaMapel);
                cout << "Kode mata pelajaran = ";
                getline(cin, kodeMapel);
                pelajaran pel = create_pelajaran(namaMapel, kodeMapel);
                tampil_pelajaran(pel);
                break;
            }
        }
        if (pilihan != 0) {
                cout << "\nTekan Enter untuk kembali...";
                cin.ignore();
                cin.get();
        }

    } while (pilihan != 0);

    return 0;
}
