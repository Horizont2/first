#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {
    double L;
    cout << "Введіть довжину кола L: ";
    cin >> L;

    double R = L / (2 * PI);
    double area = PI * R * R;
    cout << "Площа кола = " << area << endl;

    return 0;
}
