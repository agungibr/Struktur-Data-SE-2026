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
    address First;
};

/********* pembuatan list kosong *********/
void createList(List &L);
/* I.S. sembarang
   F.S. terbentuk list kosong */

/********* manajemen memori *********/
address alokasi(infotype x);
/* mengembalikan address elemen baru dengan info = x dan next = Nil */

void dealokasi(address &P);
/* I.S. P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

/********* penambahan elemen *********/
void insertFirst(List &L, address P);
/* I.S. sembarang, P sudah dialokasikan
   F.S. menempatkan elemen beralamat P pada awal list */

/********* proses semua elemen list *********/
void printInfo(List L);
/* I.S. list mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

/********* pencarian sebuah elemen list *********/
address findElm(List L, infotype x);
/* mencari elemen list dengan info = x
   jika ada, mengembalikan address elemen tersebut, dan Nil jika sebaliknya */

/********* proses terhadap list *********/
int sumInfo(List L);
/* mengembalikan jumlah total info seluruh elemen pada list */

#endif // SINGLYLIST_H_INCLUDED
