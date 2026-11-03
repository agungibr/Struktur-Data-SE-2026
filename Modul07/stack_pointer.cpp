#include "stack_pointer.h"

address alokasi(infotypePtr X) {
    address P = new elmStack;
    if (P != Nil) {
        P->info = X;
        P->next = Nil;
    }
    return P;
}

address createElm(infotypePtr X) {
    return alokasi(X);
}

void createStack(StackPointer &S) {
    S.Top = Nil;
}

void push(StackPointer &S, address P) {
    P->next = S.Top;
    S.Top = P;
}

address pop(StackPointer &S) {
    address P = S.Top;
    if (S.Top != Nil) {
        S.Top = S.Top->next;
    }
    return P;
}
