#include <bits/stdc++.h>
using namespace std;

int main(){

    double x,y,z;
    cin >> x >> y >> z;
    double m = (pow((y + y) + z,2.8) - z)/(x + y)-(x / y);
    cout << m << endl;

    return 0;
}
