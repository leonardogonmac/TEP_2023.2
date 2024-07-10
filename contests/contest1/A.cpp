#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n/2;

    if(n % 2 == 0) printf("%lf\n", 0.5);
    else {
        int m = n/2;
        printf("%lf\n", (double)(m+1)/n);
    }

    //printf(n % 2 == 0 ? "%f\n", 0.5 : "%f\n", (m+1)/n);     
    return 0;
}
