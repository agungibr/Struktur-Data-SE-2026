#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

struct mahasiswa {
    char nim[20];
    int nilai1;
    int nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

#endif
