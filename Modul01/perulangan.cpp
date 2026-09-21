#include <iostream>
using namespace std;

void Perulangan() {
    int pilihan;

    do {
        cout << "\n=== PERULANGAN ===" << endl;
        cout << "1. for" << endl;
        cout << "2. while" << endl;
        cout << "3. do-while" << endl;
        cout << "4. Perbandingan for dan while" << endl;
        cout << "5. Kembali" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int jum;

                cout << "\n--- for ---" << endl;
                cout << "Jumlah perulangan: ";
                cin >> jum;

                for (int i = 0; i < jum; i++) {
                    cout << "Saya pintar" << endl;
                }
                break;
            }

            case 2: {
                int i = 1;
                int jum;

                cout << "\n--- while ---" << endl;
                cout << "Masukkan banyak baris: ";
                cin >> jum;

                while (i <= jum) {
                    cout << "Baris ke-" << i << endl;
                    i++;
                }
                break;
            }

            case 3: {
                int i = 1;
                int jum;

                cout << "\n--- do-while ---" << endl;
                cout << "Masukkan banyak baris: ";
                cin >> jum;

                do {
                    cout << "Baris ke-" << i << endl;
                    i++;
                } while (i <= jum);

                break;
            }

            case 4: {
                int jum;

                cout << "\n--- Perbandingan for dan while ---" << endl;
                cout << "Jumlah perulangan: ";
                cin >> jum;

                cout << "\nMenggunakan for:" << endl;
                for (int i = 1; i <= jum; i++) {
                    cout << i << " ";
                }

                cout << "\n\nMenggunakan while:" << endl;
                int i = 1;
                while (i <= jum) {
                    cout << i << " ";
                    i++;
                }

                cout << endl;
                break;
            }

            case 5:
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 5);
}

