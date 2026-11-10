#ifndef QUEUE_POINTER_H
#define QUEUE_POINTER_H

#include <iostream>
#include <cstddef>
using namespace std;

#define Nil NULL

typedef int infotypePtr;
typedef struct elmQ *address;

struct elmQ {
    infotypePtr info;
    address next;
};

struct QueuePointer {
    address head, tail;
};

/* pengecekan apakah queue kosong */
bool isEmpty(QueuePointer Q);

/* pembuatan queue kosong */
void createQueue(QueuePointer &Q);

/* manajemen memori */
address alokasi(infotypePtr X);
void dealokasi(address &P);

/* pencarian elemen */
address findElm(QueuePointer Q, infotypePtr X);
bool fFindElm(QueuePointer Q, address P);

/* penambahan elemen */
void insert(QueuePointer &Q, address P);

/* penghapusan elemen */
void deleteQueue(QueuePointer &Q, address &P);

/* proses semua elemen queue */
void printInfo(QueuePointer Q);
int nbList(QueuePointer Q);
void delAll(QueuePointer &Q);

#endif
