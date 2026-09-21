#include <iostream>
using namespace std;

void Operator() {
    int pilihan;

    do {
        cout << "\n=== OPERATOR ===" << endl;
        cout << "1. Aritmatika" << endl;
        cout << "2. Assignment" << endl;
        cout << "3. Relasional" << endl;
        cout << "4. Logika" << endl;
        cout << "5. Unary / sizeof" << endl;
        cout << "6. Increment & Decrement" << endl;
        cout << "7. Kondisional (ternary)" << endl;
        cout << "8. Kembali" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                float a, b;

                cout << "\n--- Operator Aritmatika ---" << endl;
                cout << "Masukkan a: ";
                cin >> a;
                cout << "Masukkan b: ";
                cin >> b;

                cout << "a + b = " << a + b << endl;
                cout << "a - b = " << a - b << endl;
                cout << "a * b = " << a * b << endl;

                if (b != 0) {
                    cout << "a / b = " << a / b << endl;
                } else {
                    cout << "a / b tidak dapat dilakukan karena b = 0." << endl;
                }
                break;
            }

            case 2: {
                int a = 10;

                cout << "\n--- Assignment ---" << endl;
                cout << "Nilai awal a = " << a << endl;

                a += 5;
                cout << "Setelah a += 5 -> " << a << endl;

                a -= 3;
                cout << "Setelah a -= 3 -> " << a << endl;

                a *= 2;
                cout << "Setelah a *= 2 -> " << a << endl;

                a /= 4;
                cout << "Setelah a /= 4 -> " << a << endl;
                break;
            }

            case 3: {
                int a, b;

                cout << "\n--- Operator Relasional ---" << endl;
                cout << "Masukkan a: ";
                cin >> a;
                cout << "Masukkan b: ";
                cin >> b;

                cout << "a == b : " << (a == b) << endl;
                cout << "a != b : " << (a != b) << endl;
                cout << "a < b  : " << (a < b) << endl;
                cout << "a <= b : " << (a <= b) << endl;
                cout << "a > b  : " << (a > b) << endl;
                cout << "a >= b : " << (a >= b) << endl;
                break;
            }

            case 4: {
                int nilai;

                cout << "\n--- Operator Logika ---" << endl;
                cout << "Masukkan nilai: ";
                cin >> nilai;

                cout << "(nilai >= 0 && nilai <= 100) = "
                     << (nilai >= 0 && nilai <= 100) << endl;

                cout << "(nilai < 0 || nilai > 100) = "
                     << (nilai < 0 || nilai > 100) << endl;

                cout << "!(nilai == 0) = "
                     << !(nilai == 0) << endl;
                break;
            }

            case 5: {
                int x = 10;
                float y = 2.5;

                cout << "\n--- Unary & sizeof ---" << endl;
                cout << "sizeof(x) = " << sizeof(x) << " byte" << endl;
                cout << "sizeof(y) = " << sizeof(y) << " byte" << endl;

                cout << "(float)(5 / 2) = " << (float)(5 / 2) << endl;
                cout << "(float)5 / 2 = " << (float)5 / 2 << endl;
                break;
            }

            case 6: {
                int r = 10;
                int s;

                cout << "\n--- Increment & Decrement ---" << endl;

                s = 10 + ++r;
                cout << "Pre-increment:" << endl;
                cout << "r = " << r << endl;
                cout << "s = " << s << endl;

                r = 10;
                s = 10 + r++;
                cout << "\nPost-increment:" << endl;
                cout << "r = " << r << endl;
                cout << "s = " << s << endl;

                r--;
                cout << "\nSetelah r--, r = " << r << endl;
                break;
            }

            case 7: {
                double total;

                cout << "\n--- Operator Kondisional / Ternary ---" << endl;
                cout << "Total pembelian: Rp";
                cin >> total;

                double diskon =
                    (total >= 100000) ? 0.05 * total : 0;

                cout << "Besar diskon = Rp" << diskon << endl;
                break;
            }

            case 8:
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 8);
}

