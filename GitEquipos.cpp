#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, y, z;
    cin>>x>>y>>z;

    double numerador = ( (2*x + y) / z ) * ( (y*y*y) - z );
    double denominador = (x + 2*y + 3*z) / (z - 2*y - 3*x);
    double resultado = (numerador / denominador) + (x*x) + (z*z);
    cout << fixed << setprecision(6) << resultado;
    return 0;
}
