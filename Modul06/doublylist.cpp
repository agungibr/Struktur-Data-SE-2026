#include "doublylist.h"

void createList(List &L) {
    L.First = Nil;
    L.Last = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    return P;
}

void dealokasi(address &P) {
    if (P != Nil) {
        delete P;
        P = Nil;
    }
}

void insertFirst(List &L, address P) {
    if (P == Nil) return;

    P->prev = Nil;
    P->next = L.First;

    if (L.First != Nil) {
        L.First->prev = P;
    } else {
        // Jika list kosong, P juga menjadi elemen terakhir.
        L.Last = P;
    }

    L.First = P;
}

void insertLast(List &L, address P) {
    if (P == Nil) return;

    P->next = Nil;
    P->prev = L.Last;

    if (L.Last != Nil) {
        L.Last->next = P;
    } else {
        //jika list kosong, P juga menjadi elemen pertama
        L.First = P;
    }

    L.Last = P;
}

//menyisipkan P tepat setelah Prec
void insertAfter(List &L, address Prec, address P) {
    if (Prec == Nil || P == Nil) return;

    if (Prec == L.Last) {
        insertLast(L, P);
        return;
    }

    P->prev = Prec;
    P->next = Prec->next;
    Prec->next->prev = P;
    Prec->next = P;
}

//menyisipkan P tepat sebelum Prec
void insertBefore(List &L, address Prec, address P) {
    if (Prec == Nil || P == Nil) return;

    if (Prec == L.First) {
        insertFirst(L, P);
        return;
    }

    P->next = Prec;
    P->prev = Prec->prev;
    Prec->prev->next = P;
    Prec->prev = P;
}

void deleteFirst(List &L, address &P) {
    if (L.First == Nil) {
        P = Nil;
        return;
    }

    P = L.First;
    L.First = L.First->next;

    if (L.First != Nil) {
        L.First->prev = Nil;
    } else {
        //list menjadi kosong
        L.Last = Nil;
    }

    P->next = Nil;
    P->prev = Nil;
}

void deleteLast(List &L, address &P) {
    if (L.Last == Nil) {
        P = Nil;
        return;
    }

    P = L.Last;
    L.Last = L.Last->prev;

    if (L.Last != Nil) {
        L.Last->next = Nil;
    } else {
        //list menjadi kosong
        L.First = Nil;
    }

    P->next = Nil;
    P->prev = Nil;
}

//menghapus node yang berada tepat setelah Prec
void deleteAfter(List &L, address Prec, address &P) {
    if (Prec == Nil || Prec->next == Nil) {
        P = Nil;
        return;
    }

    P = Prec->next;

    if (P == L.Last) {
        L.Last = Prec;
        Prec->next = Nil;
    } else {
        Prec->next = P->next;
        P->next->prev = Prec;
    }

    P->next = Nil;
    P->prev = Nil;
}

//menghapus node yang berada tepat sebelum Prec
void deleteBefore(List &L, address Prec, address &P) {
    if (Prec == Nil || Prec->prev == Nil) {
        P = Nil;
        return;
    }

    P = Prec->prev;

    if (P == L.First) {
        L.First = Prec;
        Prec->prev = Nil;
    } else {
        P->prev->next = Prec;
        Prec->prev = P->prev;
    }

    P->next = Nil;
    P->prev = Nil;
}

void printInfo(List L) {
    address P = L.First;

    if (P == Nil) {
        cout << "List kosong" << endl;
        return;
    }

    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void printInfoReverse(List L) {
    address P = L.Last;

    if (P == Nil) {
        cout << "List kosong" << endl;
        return;
    }

    while (P != Nil) {
        cout << P->info << " ";
        P = P->prev;
    }
    cout << endl;
}

address findElm(List L, infotype x) {
    address P = L.First;

    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }

    return Nil;
}

