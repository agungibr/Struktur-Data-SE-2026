#include <iostream>
using namespace std;

void Variable() {
    cout << "==== Variable, Tipe Data, Identifier, Konstanta ====" << endl;

    //identifier
    int nilai = 85;
    int nilaiAkhir = 93;
    float tinggi = 175.5;
    double harga = 135000.00;
    char grade = 'B';

    cout << "\n ---Contoh Variable ---" << endl;
    cout << "nilai  = " << nilai << endl;
    cout << "nilai Akhir = " << nilaiAkhir << endl;
    cout << "tinggi  = " << tinggi << endl;
    cout << "harga  = " << harga << endl;
    cout << "grade  = " << grade << endl;

    //case sensitive
    int angka = 10;
    int Angka = 20;

    cout << "\n ---Case Sensitive---" << endl;
    cout << "angka  = " << angka << endl;
    cout << "Angka  = " << Angka << endl;

    //konstanta
    const double PHI = 3.14;

    cout << "\n ---Konstanta---" << endl;
    cout << "PHI = " << PHI << endl;

    //sizeof
    cout << "\n Ukuran tipe data dengan sizeof" << endl;
    cout << "sizeof(char) = " << sizeof(char) << " byte" << endl;
    cout << "sizeof(int) = " << sizeof(int) << " byte" << endl;
    cout << "sizeof(float) = " << sizeof(float) << " byte" << endl;
    cout << "sizeof(double) = " << sizeof(double) << " byte" << endl;
}
