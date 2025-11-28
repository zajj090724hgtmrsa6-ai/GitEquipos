#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double x2 = x * x;
    double x3 = x2 * x;
    double y2 = y * y;

    double numeradorInterno = (x3 + x2) / (y2 - y);
    double resta = numeradorInterno - (y / x + 5);
    double z = resta / (2 * x);

    cout << z << endl;
    return 0;
}

