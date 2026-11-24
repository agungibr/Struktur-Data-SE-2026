#include "multilist.h"

boolean ListEmpty(listinduk L) {
    return (L.first == Nil && L.last == Nil);
}

boolean ListEmptyAnak(listanak L) {
    return (L.first == Nil && L.last == Nil);
}

void CreateList(listinduk &L) {
    L.first = Nil;
    L.last = Nil;
}

void CreateListAnak(listanak &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotypeinduk X) {
    address P = new elemen_list_induk;
    if (P != Nil) {
        P->info = X;
        CreateListAnak(P->lanak);
        P->next = Nil;
        P->prev = Nil;
    }
    return P;
}

address_anak alokasiAnak(infotypeanak X) {
    address_anak P = new elemen_list_anak;
    if (P != Nil) {
        P->info = X;
        P->next = Nil;
        P->prev = Nil;
    }
    return P;
}

void dealokasi(address P) {
    delete P;
}

void dealokasiAnak(address_anak P) {
    delete P;
}

address findElm(listinduk L, infotypeinduk X) {
    address P = L.first;
    while (P != Nil) {
        if (P->info == X) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

address_anak findElm(listanak Lanak, infotypeanak X) {
    address_anak P = Lanak.first;
    while (P != Nil) {
        if (P->info == X) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

boolean fFindElm(listinduk L, address P) {
    address Bantu = L.first;
    while (Bantu != Nil) {
        if (Bantu == P) {
            return true;
        }
        Bantu = Bantu->next;
    }
    return false;
}

boolean fFindElmanak(listanak Lanak, address_anak P) {
    address_anak Bantu = Lanak.first;
    while (Bantu != Nil) {
        if (Bantu == P) {
            return true;
        }
        Bantu = Bantu->next;
    }
    return false;
}

address findBefore(listinduk L, address P) {
    if (P == Nil || P == L.first || !fFindElm(L, P)) {
        return Nil;
    }
    return P->prev;
}

address_anak findBeforeAnak(listanak Lanak, infotypeinduk X, address_anak P) {
    if (P == Nil || P == Lanak.first || !fFindElmanak(Lanak, P)) {
        return Nil;
    }
    if (P->info == X) {
        return P->prev;
    }
    return Nil;
}

void insertFirst(listinduk &L, address P) {
    if (P != Nil) {
        if (ListEmpty(L)) {
            L.first = P;
            L.last = P;
        } else {
            P->next = L.first;
            L.first->prev = P;
            L.first = P;
        }
    }
}

void insertAfter(listinduk &L, address P, address Prec) {
    if (P != Nil && Prec != Nil) {
        if (Prec == L.last) {
            insertLast(L, P);
        } else {
            P->next = Prec->next;
            P->prev = Prec;
            Prec->next->prev = P;
            Prec->next = P;
        }
    }
}

void insertLast(listinduk &L, address P) {
    if (P != Nil) {
        if (ListEmpty(L)) {
            L.first = P;
            L.last = P;
        } else {
            P->prev = L.last;
            L.last->next = P;
            L.last = P;
        }
    }
}

void insertFirstAnak(listanak &L, address_anak P) {
    if (P != Nil) {
        if (ListEmptyAnak(L)) {
            L.first = P;
            L.last = P;
        } else {
            P->next = L.first;
            L.first->prev = P;
            L.first = P;
        }
    }
}

void insertAfterAnak(listanak &L, address_anak P, address_anak Prec) {
    if (P != Nil && Prec != Nil) {
        if (Prec == L.last) {
            insertLastAnak(L, P);
        } else {
            P->next = Prec->next;
            P->prev = Prec;
            Prec->next->prev = P;
            Prec->next = P;
        }
    }
}

void insertLastAnak(listanak &L, address_anak P) {
    if (P != Nil) {
        if (ListEmptyAnak(L)) {
            L.first = P;
            L.last = P;
        } else {
            P->prev = L.last;
            L.last->next = P;
            L.last = P;
        }
    }
}

void delFirst(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = P->next;
            L.first->prev = Nil;
            P->next = Nil;
        }
    } else {
        P = Nil;
    }
}

void delLast(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = P->prev;
            L.last->next = Nil;
            P->prev = Nil;
        }
    } else {
        P = Nil;
    }
}

void delAfter(listinduk &L, address &P, address Prec) {
    if (!ListEmpty(L) && Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        if (P == L.last) {
            delLast(L, P);
        } else {
            Prec->next = P->next;
            P->next->prev = Prec;
            P->next = Nil;
            P->prev = Nil;
        }
    } else {
        P = Nil;
    }
}

void delP(listinduk &L, infotypeinduk X) {
    address P = findElm(L, X);
    if (P != Nil) {
        address_anak Panak;
        while (!ListEmptyAnak(P->lanak)) {
            delFirstAnak(P->lanak, Panak);
            dealokasiAnak(Panak);
        }

        if (P == L.first) {
            delFirst(L, P);
        } else if (P == L.last) {
            delLast(L, P);
        } else {
            delAfter(L, P, P->prev);
        }
        dealokasi(P);
    }
}

void delFirstAnak(listanak &L, address_anak &P) {
    if (!ListEmptyAnak(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = P->next;
            L.first->prev = Nil;
            P->next = Nil;
        }
    } else {
        P = Nil;
    }
}

void delLastAnak(listanak &L, address_anak &P) {
    if (!ListEmptyAnak(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = P->prev;
            L.last->next = Nil;
            P->prev = Nil;
        }
    } else {
        P = Nil;
    }
}

void delAfterAnak(listanak &L, address_anak &P, address_anak Prec) {
    if (!ListEmptyAnak(L) && Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        if (P == L.last) {
            delLastAnak(L, P);
        } else {
            Prec->next = P->next;
            P->next->prev = Prec;
            P->next = Nil;
            P->prev = Nil;
        }
    } else {
        P = Nil;
    }
}

void delPAnak(listanak &L, infotypeanak X) {
    address_anak P = findElm(L, X);
    if (P != Nil) {
        if (P == L.first) {
            delFirstAnak(L, P);
        } else if (P == L.last) {
            delLastAnak(L, P);
        } else {
            delAfterAnak(L, P, P->prev);
        }
        dealokasiAnak(P);
    }
}

void printInfo(list L) {
    if (ListEmpty(L)) {
        cout << "List Induk Kosong" << endl;
    } else {
        address P = L.first;
        while (P != Nil) {
            cout << "Induk: " << P->info << " -> Anak: ";
            printInfoAnak(P->lanak);
            P = P->next;
        }
    }
}

int nbList(list L) {
    int jumlah = 0;
    address P = L.first;
    while (P != Nil) {
        jumlah++;
        P = P->next;
    }
    return jumlah;
}

void printInfoAnak(listanak Lanak) {
    if (ListEmptyAnak(Lanak)) {
        cout << "(kosong)" << endl;
    } else {
        address_anak P = Lanak.first;
        while (P != Nil) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

int nbListAnak(listanak Lanak) {
    int jumlah = 0;
    address_anak P = Lanak.first;
    while (P != Nil) {
        jumlah++;
        P = P->next;
    }
    return jumlah;
}

void delAll(listinduk &L) {
    address P;
    address_anak Panak;
    while (!ListEmpty(L)) {
        delFirst(L, P);
        while (!ListEmptyAnak(P->lanak)) {
            delFirstAnak(P->lanak, Panak);
            dealokasiAnak(Panak);
        }
        dealokasi(P);
    }
}
