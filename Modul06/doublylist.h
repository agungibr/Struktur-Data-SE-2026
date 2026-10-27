#ifndef DOUBLYLIST_H_INCLUDED
#define DOUBLYLIST_H_INCLUDED

#include <iostream>
#define Nil NULL

using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address First;
    address Last;
};

//pembuatan list kosong
void createList(List &L);

//memory allocation
address alokasi(infotype x);
void dealokasi(address &P);

//penambahan elemen
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertBefore(List &L, address Prec, address P);

//penghapusan elemen
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteBefore(List &L, address Prec, address &P);

//proses list
void printInfo(List L);
void printInfoReverse(List L);
address findElm(List L, infotype x);

#endif
