#include <iostream>
using namespace std;

void materiArray() {
    int pilihan;

    do {
        cout << "\n=== ARRAY ===\n";
        cout << "1. Array satu dimensi\n";
        cout << "2. Array dua dimensi\n";
        cout << "3. Array berdimensi banyak\n";
        cout << "4. Kembali\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int nilai[5];

                cout << "\n--- Array Satu Dimensi ---\n";
                for (int i = 0; i < 5; i++) {
                    cout << "Masukkan nilai ke-" << i + 1 << ": ";
                    cin >> nilai[i];
                }

                cout << "\nData array:\n";
                for (int i = 0; i < 5; i++)
                    cout << "nilai[" << i << "] = " << nilai[i] << endl;

                cout << "\nIndeks pertama = 0, indeks terakhir = 4.\n";
                break;
            }

            case 2: {
                int data_nilai[4][3];

                cout << "\n--- Array Dua Dimensi ---\n";
                for (int i = 0; i < 4; i++)
                    for (int j = 0; j < 3; j++) {
                        cout << "data_nilai[" << i << "][" << j << "] = ";
                        cin >> data_nilai[i][j];
                    }

                cout << "\nTabel data:\n";
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 3; j++)
                        cout << data_nilai[i][j] << "\t";
                    cout << endl;
                }
                break;
            }

            case 3: {
                int data_rumit[2][2][3] = {
                    {{1,2,3},{4,5,6}},
                    {{7,8,9},{10,11,12}}
                };

                cout << "\n--- Array Berdimensi Banyak ---\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        for (int k = 0; k < 3; k++)
                            cout << data_rumit[i][j][k] << " ";
                        cout << endl;
                    }
                    cout << endl;
                }
                break;
            }

            case 4: break;
            default: cout << "Pilihan tidak tersedia.\n";
        }
    } while (pilihan != 4);
}

