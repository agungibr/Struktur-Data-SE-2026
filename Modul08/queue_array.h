#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 3;

struct infotypeArr {
    char id[20];
    char nama[20];
};

struct QueueArray {
    infotypeArr info[MAX];
    int head;
    int tail;
};

/* membuat data infotype dari id dan nama */
infotypeArr createInfo(const char *id, const char *nama);

/* pengecekan apakah Queue penuh */
int isFull(QueueArray Q);

/* pengecekan apakah Queue kosong */
int isEmpty(QueueArray Q);

/* pembuatan queue */
void createQueue(QueueArray &Q);

/* penambahan elemen pada queue */
void enQueue(QueueArray &Q, infotypeArr X);

/* penghapusan elemen pada queue */
void deQueue(QueueArray &Q);

/* proses semua elemen pada queue */
void viewQueue(QueueArray Q);

#endif
