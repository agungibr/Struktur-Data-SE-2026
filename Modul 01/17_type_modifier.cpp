#include <iostream>
using namespace std;

int main() {
    unsigned int jumlah = 100;
    unsigned char karakter = 65;
    long int harga = 2000000000L;

    cout << "unsigned int : " << jumlah << endl;
    cout << "unsigned char : " << static_cast<int>(karakter) << endl;
    cout << "long int     : " << harga << endl;

    return 0;
}
