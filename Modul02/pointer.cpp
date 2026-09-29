#include <iostream>
using namespace std;

void materiPointer() {
    int pilihan;

    do {
        cout << "\n=== POINTER DAN ALAMAT MEMORI ===\n";
        cout << "1. Melihat alamat variabel\n";
        cout << "2. Pointer dasar\n";
        cout << "3. Mengubah nilai melalui pointer\n";
        cout << "4. Kembali\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int j = 10;
                char a = 'u';

                cout << "\nNilai a  = " << a << endl;
                cout << "Alamat a = " << static_cast<void*>(&a) << endl;
                cout << "Nilai j  = " << j << endl;
                cout << "Alamat j = " << &j << endl;
                break;
            }

            case 2: {
                int j = 10, k;
                int *p_int = &j;
                k = *p_int;

                cout << "\nNilai j      = " << j << endl;
                cout << "Alamat j     = " << &j << endl;
                cout << "Isi p_int    = " << p_int << endl;
                cout << "Alamat p_int = " << &p_int << endl;
                cout << "Nilai *p_int = " << *p_int << endl;
                cout << "Nilai k      = " << k << endl;
                break;
            }

            case 3: {
                int x = 87;
                int *px = &x;

                cout << "\nNilai x sebelum = " << x << endl;
                *px = 100;
                cout << "Nilai x sesudah = " << x << endl;
                cout << "Nilai yang ditunjuk px = " << *px << endl;
                break;
            }

            case 4: break;
            default: cout << "Pilihan tidak tersedia.\n";
        }
    } while (pilihan != 4);
}

