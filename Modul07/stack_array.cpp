#include "stack_array.h"

int isEmpty(StackArray S) {
    if (S.Top == 0) {
        return 1;
    } else {
        return 0;
    }
}

void createStack(StackArray &S) {
    S.Top = 0;
}

void push(StackArray &S, infotypeArr X) {
    if (S.Top < 10) {
        S.Top = S.Top + 1;
        S.info[S.Top] = X;
    } else {
        cout << "Stack Penuh!" << endl;
    }
}

void pop(StackArray &S, infotypeArr &X) {
    if (!isEmpty(S)) {
        X = S.info[S.Top];
        S.Top = S.Top - 1;
    } else {
        cout << "Stack Kosong!" << endl;
    }
}

void viewStack(StackArray S) {
    for (int i = S.Top; i >= 1; i--) {
        cout << "NIM: " << S.info[i].nim << " | Nama: " << S.info[i].nama << endl;
    }
}
