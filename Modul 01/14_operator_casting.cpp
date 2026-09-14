#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int y = 3;

    // Tanpa casting: pembagian int menghasilkan int.
    double hasil1 = x / y;

    // Dengan casting: salah satu operand diubah menjadi double.
    double hasil2 = static_cast<double>(x) / y;

    cout << "Tanpa casting = " << hasil1 << endl;
    cout << "Dengan casting = " << hasil2 << endl;

    return 0;
}
