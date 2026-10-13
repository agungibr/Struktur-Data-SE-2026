#include <iostream>
#include "Singlylist.h"

using namespace std;

int main()
{
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    CreateList(L);

    //insertFirst & printInfo
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

    cout << "=== Hasil insertFirst ===" << endl;
    printInfo(L);
    cout << "Jumlah elemen : " << nbList(L) << endl;

    //Insert Last
    address P6 = alokasi(5);
    insertLast(L, P6);
    cout << "\n=== Setelah insertLast(5) ===" << endl;
    printInfo(L);

    //Insert After (setelah elemen 12)
    address P7 = alokasi(20);
    insertAfter(L, P4, P7);
    cout << "\n=== Setelah insertAfter 12 -> 20 ===" << endl;
    printInfo(L);

    //Update
    cout << "\n=== Update 8 menjadi 88 ===" << endl;
    updateElm(L, 8, 88);
    printInfo(L);

    //Delete First
    address D;
    deleteFirst(L, D);
    cout << "\n=== Setelah deleteFirst (" << D->info << " dihapus) ===" << endl;
    dealokasi(D);
    printInfo(L);

    //Delete Last
    deleteLast(L, D);
    cout << "\n=== Setelah deleteLast (" << D->info << " dihapus) ===" << endl;
    dealokasi(D);
    printInfo(L);

    //Delete After (setelah elemen 12)
    deleteAfter(L, L.first, D);
    cout << "\n=== Setelah deleteAfter 12 (" << D->info << " dihapus) ===" << endl;
    dealokasi(D);
    printInfo(L);

    //Delete Elemen (delAll)
    delAll(L);
    cout << "\n=== Setelah delAll ===" << endl;
    printInfo(L);
    cout << "Jumlah elemen : " << nbList(L) << endl;

    return 0;
}
