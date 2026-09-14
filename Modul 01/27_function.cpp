#include <iostream>
using namespace std;

// Function prototype
float ctof(float celcius);

int main() {
    float celcius;

    cout << "Nilai Celcius? ";
    cin >> celcius;

    float fahrenheit = ctof(celcius);

    cout << celcius << " Celcius = "
         << fahrenheit << " Fahrenheit" << endl;

    return 0;
}

// Function definition
float ctof(float celcius) {
    return celcius * 1.8f + 32;
}
