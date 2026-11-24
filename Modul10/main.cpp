#include <iostream>
#include "multilist.h"

using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    cout << "=== INSERT INDUK ===" << endl;
    insertLast(L, alokasi(1));
    insertLast(L, alokasi(2));
    insertLast(L, alokasi(3));
    printInfo(L);
    cout << "Jumlah Induk: " << nbList(L) << endl;

    cout << "\n=== INSERT ANAK ===" << endl;
    address P1 = findElm(L, 1);
    if (P1 != Nil) {
        insertLastAnak(P1->lanak, alokasiAnak(10));
        insertLastAnak(P1->lanak, alokasiAnak(11));
        insertFirstAnak(P1->lanak, alokasiAnak(9));
    }

    address P2 = findElm(L, 2);
    if (P2 != Nil) {
        insertLastAnak(P2->lanak, alokasiAnak(20));
        insertLastAnak(P2->lanak, alokasiAnak(21));
    }
    printInfo(L);

    cout << "\n=== DELETE ANAK (11 dari Induk 1) ===" << endl;
    if (P1 != Nil) {
        delPAnak(P1->lanak, 11);
    }
    printInfo(L);

    cout << "\n=== DELETE INDUK (Induk 1 beserta seluruh anaknya) ===" << endl;
    delP(L, 1);
    printInfo(L);
    cout << "Jumlah Induk: " << nbList(L) << endl;

    cout << "\n=== DELETE ALL ===" << endl;
    delAll(L);
    printInfo(L);

    return 0;
}
