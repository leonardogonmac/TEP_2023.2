#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    double y;

    cin >> x >> y;
    y *= 100;
    int z = round(y);

    cout << (long long int) (x*z/100) << '\n';

    return 0;
}
