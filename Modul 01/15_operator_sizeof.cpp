#include <iostream>
using namespace std;

int main() {
    char karakter;
    int bilangan;
    float pecahan;
    double pecahanPresisi;

    cout << "Ukuran char   = " << sizeof(karakter) << " byte" << endl;
    cout << "Ukuran int    = " << sizeof(bilangan) << " byte" << endl;
    cout << "Ukuran float  = " << sizeof(pecahan) << " byte" << endl;
    cout << "Ukuran double = " << sizeof(pecahanPresisi) << " byte" << endl;

    return 0;
}
