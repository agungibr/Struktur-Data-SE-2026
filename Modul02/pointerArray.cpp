#include <iostream>
using namespace std;

void materiPointerArray() {
    const int MAX = 5;
    int nilai[MAX] = {10, 20, 30, 40, 50};
    int *pa = &nilai[0];

    cout << "=== POINTER DAN ARRAY ===\n";
    cout << "\nArray:\n";

    for (int i = 0; i < MAX; i++)
        cout << "nilai[" << i << "] = " << nilai[i] << endl;

    cout << "\npa menunjuk nilai[0]\n";
    cout << "pa  = " << pa << endl;
    cout << "*pa = " << *pa << endl;

    cout << "\nMengakses array melalui pointer:\n";
    for (int i = 0; i < MAX; i++)
        cout << "*(pa + " << i << ") = " << *(pa + i) << endl;

    *(pa + 2) = 999;
    cout << "\nSetelah *(pa + 2) = 999:\n";
    cout << "nilai[2] = " << nilai[2] << endl;
}

