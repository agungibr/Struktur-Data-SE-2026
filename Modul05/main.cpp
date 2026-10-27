#include <iostream>
#include "singlylist.h"

using namespace std;

int main()
{
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Latihan 2: menampilkan isi list
    printInfo(L);
    cout << endl;

    // Latihan 3: mencari elemen dengan info 8
    address cari = findElm(L, 8);
    if (cari != Nil) {
        cout << cari->info << " ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }
    cout << endl;

    // Latihan 4: menghitung total info seluruh elemen
    cout << "Total info dari kelima elemen adalah " << sumInfo(L) << endl;

    return 0;
}
