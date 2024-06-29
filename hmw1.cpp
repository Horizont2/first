#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3;
    cout << "Введіть значення R1: ";
    cin >> R1;
    cout << "Введіть значення R2: ";
    cin >> R2;
    cout << "Введіть значення R3: ";
    cin >> R3;

    double R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
    cout << "R0 = " << R0 << endl;

    return 0;
}
