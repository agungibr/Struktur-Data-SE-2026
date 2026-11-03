#include <iostream>
#include "stack_pointer.h"
#include "stack_array.h"

using namespace std;

int main() {
    cout << "==========================================" << endl;
    cout << "      STACK REPRESENTASI POINTER      " << endl;
    cout << "==========================================" << endl;
    StackPointer SP;
    createStack(SP);

    address P1 = createElm(10);
    address P2 = createElm(20);

    push(SP, P1);
    push(SP, P2);

    address p = pop(SP);
    if (p != Nil) {
        cout << "Elemen di-pop (Pointer): " << p->info << endl;
        delete p;
    }

    cout << "\n==========================================" << endl;
    cout << "       STACK REPRESENTASI ARRAY       " << endl;
    cout << "==========================================" << endl;
    StackArray SA;
    createStack(SA);

    infotypeArr mhs1 = {"1301230001", "Budi"};
    infotypeArr mhs2 = {"1301230002", "Andi"};

    push(SA, mhs1);
    push(SA, mhs2);

    cout << "\nIsi Stack Array" << endl;
    viewStack(SA);

    infotypeArr mhsPop;
    pop(SA, mhsPop);
    cout << "\nData di-pop (Array): " << mhsPop.nama << endl;

    cout << "\nIsi Stack Array Setelah Pop" << endl;
    viewStack(SA);

    return 0;
}
