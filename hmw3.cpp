#include <iostream>
using namespace std;

int main() {
    double v, t, a;
    cout << "Введіть швидкість v (м/с): ";
    cin >> v;
    cout << "Введіть час t (с): ";
    cin >> t;
    cout << "Введіть прискорення a (м/с^2): ";
    cin >> a;

    double distance = v * t + (a * t * t) / 2;
    cout << "Пройдена відстань = " << distance << endl;

    return 0;
}
