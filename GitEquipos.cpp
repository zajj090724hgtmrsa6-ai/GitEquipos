#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, z;
    cin>>x;
    cin>>y;
    cin>>z;

    double base = 2*x + y - z;
    double exponente = base;

    double resultado = (7 + pow(base, exponente)) / base;

    cout << fixed << setprecision(10) << resultado << endl;

    return 0;
}
