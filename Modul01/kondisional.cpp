#include <iostream>
using namespace std;

void Kondisional() {
    int pilihan;

    do {
        cout << "\n=== KONDISIONAL ===" << endl;
        cout << "1. if" << endl;
        cout << "2. if-else" << endl;
        cout << "3. switch" << endl;
        cout << "4. Kembali" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                double totalPembelian;
                double diskon = 0;

                cout << "\n--- if ---" << endl;
                cout << "Total pembelian: Rp";
                cin >> totalPembelian;

                if (totalPembelian >= 100000) {
                    diskon = 0.05 * totalPembelian;
                }

                cout << "Besar diskon = Rp" << diskon << endl;
                break;
            }

            case 2: {
                double totalPembelian;
                double diskon;

                cout << "\n--- if-else ---" << endl;
                cout << "Total pembelian: Rp";
                cin >> totalPembelian;

                if (totalPembelian >= 100000) {
                    diskon = 0.05 * totalPembelian;
                } else {
                    diskon = 0;
                }

                cout << "Besar diskon = Rp" << diskon << endl;
                break;
            }

            case 3: {
                int kodeHari;

                cout << "\n--- switch ---" << endl;
                cout << "1 = Senin" << endl;
                cout << "2 = Selasa" << endl;
                cout << "3 = Rabu" << endl;
                cout << "4 = Kamis" << endl;
                cout << "5 = Jumat" << endl;
                cout << "6 = Sabtu" << endl;
                cout << "7 = Minggu" << endl;
                cout << "Kode hari: ";
                cin >> kodeHari;

                switch (kodeHari) {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                        cout << "Hari Kerja" << endl;
                        break;

                    case 6:
                    case 7:
                        cout << "Hari Libur" << endl;
                        break;

                    default:
                        cout << "Kode masukan salah!!!" << endl;
                }
                break;
            }

            case 4:
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 4);
}

