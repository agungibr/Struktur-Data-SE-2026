#include "queue_pointer.h"

bool isEmpty(QueuePointer Q) {
    return (Q.head == Nil);
}

void createQueue(QueuePointer &Q) {
    Q.head = Nil;
    Q.tail = Nil;
}

address alokasi(infotypePtr X) {
    address P = new elmQ;
    if (P != Nil) {
        P->info = X;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

address findElm(QueuePointer Q, infotypePtr X) {
    address P = Q.head;
    while (P != Nil) {
        if (P->info == X) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

bool fFindElm(QueuePointer Q, address P) {
    address Bantu = Q.head;
    while (Bantu != Nil) {
        if (Bantu == P) {
            return true;
        }
        Bantu = Bantu->next;
    }
    return false;
}

void insert(QueuePointer &Q, address P) {
    if (isEmpty(Q)) {
        Q.head = P;
        Q.tail = P;
    } else {
        (Q.tail)->next = P;
        Q.tail = P;
    }
}

void deleteQueue(QueuePointer &Q, address &P) {
    if (isEmpty(Q)) {
        P = Nil;
        cout << "Queue kosong" << endl;
    } else {
        P = Q.head;
        if (Q.head == Q.tail) {
            Q.head = Nil;
            Q.tail = Nil;
        } else {
            Q.head = P->next;
        }
        P->next = Nil;
    }
}

void printInfo(QueuePointer Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong" << endl;
    } else {
        address P = Q.head;
        while (P != Nil) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

int nbList(QueuePointer Q) {
    int jumlah = 0;
    address P = Q.head;
    while (P != Nil) {
        jumlah++;
        P = P->next;
    }
    return jumlah;
}

void delAll(QueuePointer &Q) {
    address P;
    while (!isEmpty(Q)) {
        deleteQueue(Q, P);
        dealokasi(P);
    }
}
