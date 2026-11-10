#include "queue_array.h"

infotypeArr createInfo(const char *id, const char *nama) {
    infotypeArr X;
    strcpy(X.id, id);
    strcpy(X.nama, nama);
    return X;
}

int isFull(QueueArray Q) {
    return (Q.tail == MAX - 1) ? 1 : 0;
}

int isEmpty(QueueArray Q) {
    return (Q.head == -1 && Q.tail == -1) ? 1 : 0;
}

void createQueue(QueueArray &Q) {
    Q.head = -1;
    Q.tail = -1;
}

void enQueue(QueueArray &Q, infotypeArr X) {
    if (isFull(Q)) {
        cout << "Queue penuh, " << X.nama << " tidak dapat ditambahkan" << endl;
    } else {
        if (isEmpty(Q)) {
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail++;
        }
        Q.info[Q.tail] = X;
    }
}

void deQueue(QueueArray &Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong" << endl;
    } else {
        cout << "Elemen keluar : " << Q.info[Q.head].id
             << " - " << Q.info[Q.head].nama << endl;
        if (Q.head == Q.tail) {
            Q.head = -1;
            Q.tail = -1;
        } else {
            Q.head++;
        }
    }
}

void viewQueue(QueueArray Q) {
    cout << "Head = " << Q.head << ", Tail = " << Q.tail << endl;
    if (isEmpty(Q)) {
        cout << "Queue kosong" << endl;
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << i << ". " << Q.info[i].id << " - " << Q.info[i].nama << endl;
        }
    }
}
