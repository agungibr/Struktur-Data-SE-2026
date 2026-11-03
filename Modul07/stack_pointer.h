#ifndef STACK_POINTER_H
#define STACK_POINTER_H

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotypePtr;
typedef struct elmStack *address;

struct elmStack {
    infotypePtr info;
    address next;
};

struct StackPointer {
    address Top;
};

address createElm(infotypePtr X);
address alokasi(infotypePtr X);
void createStack(StackPointer &S);
void push(StackPointer &S, address P);
address pop(StackPointer &S);

#endif
