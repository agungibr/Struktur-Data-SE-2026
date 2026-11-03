#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>
using namespace std;

struct infotypeArr {
    char nim[20];
    char nama[20];
};

struct StackArray {
    infotypeArr info[10];
    int Top;
};

int isEmpty(StackArray S);
void createStack(StackArray &S);
void push(StackArray &S, infotypeArr X);
void pop(StackArray &S, infotypeArr &X);
void viewStack(StackArray S);

#endif
