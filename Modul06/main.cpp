#include <iostream>
#include "doublylist.h"

using namespace std;

int main() {
    List L;
    address P;

    createList(L);

    insertLast(L, alokasi(10));
    insertLast(L, alokasi(20));
    insertLast(L, alokasi(30));
    insertFirst(L, alokasi(5));
    insertFirst(L, alokasi(6));

    cout << "List dari depan: ";
    printInfo(L);

    cout << "List dari belakang: ";
    printInfoReverse(L);

    P = findElm(L, 20);
    if (P != Nil) {
        cout << "Elemen " << P->info << " ditemukan." << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }

    //hapus elemen pertama; node yang dihapus kemudian dealokasi
    deleteFirst(L, P);
    if (P != Nil) {
        dealokasi(P);
    }

    cout << "Setelah menghapus elemen pertama: ";
    printInfo(L);

    return 0;
}
