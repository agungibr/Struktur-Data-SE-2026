#include <iostream>
using namespace std;

float ctof(float celcius);

void Function() {
    cout << "=== FUNCTION ===" << endl;

    float celcius;
    float fahrenheit;

    cout << "Nilai celcius? ";
    cin >> celcius;

    fahrenheit = ctof(celcius);

    cout << celcius
         << " celcius adalah "
         << fahrenheit
         << " Fahrenheit" << endl;
}

float ctof(float celcius) {
    return celcius * 1.8 + 32;
}

