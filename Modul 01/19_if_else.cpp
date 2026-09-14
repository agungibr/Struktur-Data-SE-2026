#include <iostream>
using namespace std;

int main() {
    double totalPembelian;
    double diskon;

    cout << "Total pembelian: Rp";
    cin >> totalPembelian;

    if (totalPembelian >= 100000) {
        diskon = 0.05 * totalPembelian;
    } else {
        diskon = 0;
    }

    cout << "Besar diskon = Rp" << diskon << endl;

    return 0;
}
