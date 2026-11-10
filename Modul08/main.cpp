#include <iostream>
#include "queue_pointer.h"
#include "queue_array.h"
using namespace std;

int main() {
    cout << "==========================================" << endl;
    cout << "  QUEUE REPRESENTASI LINKED LIST" << endl;
    cout << "==========================================" << endl;
    QueuePointer Q1;
    address P;

    createQueue(Q1);

    cout << "=== ENQUEUE ===" << endl;
    insert(Q1, alokasi(10));
    insert(Q1, alokasi(20));
    insert(Q1, alokasi(30));
    printInfo(Q1);
    cout << "Jumlah elemen : " << nbList(Q1) << endl;

    cout << "\n=== CARI ELEMEN ===" << endl;
    P = findElm(Q1, 20);
    if (P != Nil) {
        cout << "Elemen 20 ditemukan" << endl;
        cout << "Alamat valid  : " << (fFindElm(Q1, P) ? "ya" : "tidak") << endl;
    } else {
        cout << "Elemen 20 tidak ditemukan" << endl;
    }

    cout << "\n=== DEQUEUE ===" << endl;
    deleteQueue(Q1, P);
    cout << "Elemen yang dihapus : " << P->info << endl;
    dealokasi(P);
    printInfo(Q1);
    cout << "Jumlah elemen : " << nbList(Q1) << endl;

    cout << "\n=== DELETE ALL ===" << endl;
    delAll(Q1);
    printInfo(Q1);

    cout << "\n==========================================" << endl;
    cout << "    QUEUE REPRESENTASI TABEL    " << endl;
    cout << "==========================================" << endl;
    QueueArray Q2;

    createQueue(Q2);
    viewQueue(Q2);

    cout << "\n=== ENQUEUE ===" << endl;
    enQueue(Q2, createInfo("001", "Budi"));
    enQueue(Q2, createInfo("002", "Ani"));
    enQueue(Q2, createInfo("003", "Citra"));
    enQueue(Q2, createInfo("004", "Dodi"));   // queue penuh
    viewQueue(Q2);

    cout << "\n=== DEQUEUE ===" << endl;
    deQueue(Q2);
    viewQueue(Q2);

    deQueue(Q2);
    deQueue(Q2);
    viewQueue(Q2);

    deQueue(Q2);                               // queue kosong

    return 0;
}
