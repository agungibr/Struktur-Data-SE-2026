#include "Singlylist.h"

//pembuatan list kosong
void CreateList(List &L) {
    L.first = Nil;
}

//pengecekan list
bool isEmpty(List L) {
    return (L.first == Nil);
}

//manajemen memori
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

//penambahan elemen
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P) {
    if (isEmpty(L)) {
        insertFirst(L, P);
    } else {
        address Q = getLast(L);
        Q->next = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

//penghapusan elemen
void deleteFirst(List &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else {
        P = L.first;
        L.first = (L.first)->next;
        P->next = Nil;
    }
}

void deleteLast(List &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else if (L.first->next == Nil) {
        /* hanya satu elemen */
        deleteFirst(L, P);
    } else {
        P = getLast(L);
        address Q = findBefore(L, P);
        Q->next = Nil;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    } else {
        P = Nil;
    }
}

void delAll(List &L) {
    address P;
    while (!isEmpty(L)) {
        deleteFirst(L, P);
        dealokasi(P);
    }
}

//fungsi bantu
address getLast(List L) {
    address P = L.first;
    if (P != Nil) {
        while (P->next != Nil) {
            P = P->next;
        }
    }
    return P;
}

address findBefore(List L, address P) {
    address Q = L.first;
    if (Q == P) {
        return Nil;
    }
    while (Q != Nil && Q->next != P) {
        Q = Q->next;
    }
    return Q;
}

address findElm(List L, infotype x) {
    address P = L.first;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

//update
void updateElm(List &L, infotype x, infotype newInfo) {
    address P = findElm(L, x);
    if (P != Nil) {
        P->info = newInfo;
    } else {
        cout << "Data " << x << " tidak ditemukan" << endl;
    }
}

//proses semua elemen list
void printInfo(List L) {
    address P = L.first;
    if (P == Nil) {
        cout << "List kosong" << endl;
    } else {
        while (P != Nil) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

int nbList(List L) {
    int jumlah = 0;
    address P = L.first;
    while (P != Nil) {
        jumlah++;
        P = P->next;
    }
    return jumlah;
}
