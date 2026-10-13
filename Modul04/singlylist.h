#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
#define Nil NULL

using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

//list kosong
void CreateList(List &L);

//pengecekan list
bool isEmpty(List L);

//manajemen memori
address alokasi(infotype x);
void dealokasi(address &P);

//penambahan elemen
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Prec, address P);

//penghapusan elemen
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void delAll(List &L);

//fungsi bantu
address getLast(List L);
address findBefore(List L, address P);
address findElm(List L, infotype x);

//update
void updateElm(List &L, infotype x, infotype newInfo);

//proses semua elemen list
void printInfo(List L);
int nbList(List L);

#endif
