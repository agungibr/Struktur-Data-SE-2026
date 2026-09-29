#include <iostream>
using namespace std;

void tukarValue(int x, int y);
void tukarPointer(int *x, int *y);
void tukarReference(int &x, int &y);

void materiParameter() {
    int pilihan;

    do {
        cout << "\n=== PARAMETER FUNCTION ===\n";
        cout << "1. Parameter formal dan aktual\n";
        cout << "2. Call by value\n";
        cout << "3. Call by pointer\n";
        cout << "4. Call by reference\n";
        cout << "5. Perbandingan\n";
        cout << "6. Kembali\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int a = 10, b = 30;

                cout << "\nContoh: perkalian(a, b)\n";
                cout << "a dan b = parameter aktual.\n";
                cout << "x dan y = parameter formal.\n";
                cout << "Nilai a = " << a << ", b = " << b << endl;
                break;
            }

            case 2: {
                int a = 4, b = 6;

                cout << "\nSebelum: a = " << a << ", b = " << b << endl;
                tukarValue(a, b);
                cout << "Sesudah: a = " << a << ", b = " << b << endl;
                cout << "Nilai di luar fungsi tidak berubah.\n";
                break;
            }

            case 3: {
                int a = 4, b = 6;

                cout << "\nSebelum: a = " << a << ", b = " << b << endl;
                tukarPointer(&a, &b);
                cout << "Sesudah: a = " << a << ", b = " << b << endl;
                cout << "Alamat a dan b dikirim menggunakan &.\n";
                break;
            }

            case 4: {
                int a = 4, b = 6;

                cout << "\nSebelum: a = " << a << ", b = " << b << endl;
                tukarReference(a, b);
                cout << "Sesudah: a = " << a << ", b = " << b << endl;
                cout << "Parameter menggunakan reference (&).\n";
                break;
            }

            case 5: {
                int a = 4, b = 6;

                cout << "\nAwal: a = " << a << ", b = " << b << endl;

                tukarValue(a, b);
                cout << "Setelah value: a = " << a << ", b = " << b << endl;

                tukarPointer(&a, &b);
                cout << "Setelah pointer: a = " << a << ", b = " << b << endl;

                tukarReference(a, b);
                cout << "Setelah reference: a = " << a << ", b = " << b << endl;
                break;
            }

            case 6: break;
            default: cout << "Pilihan tidak tersedia.\n";
        }
    } while (pilihan != 6);
}

// Call by value
void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "Di dalam fungsi: x = " << x
         << ", y = " << y << endl;
}

// Call by pointer
void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "Di dalam fungsi: *x = " << *x
         << ", *y = " << *y << endl;
}

// Call by reference
void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "Di dalam fungsi: x = " << x
         << ", y = " << y << endl;
}

