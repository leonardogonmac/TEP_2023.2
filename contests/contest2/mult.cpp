#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, flag = 0;
    cin >> n;
    unsigned long long int x = 1, a;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 0){
            cout << 0 << '\n';
            return 0;
        }
        if(x > 1000000000000000000/a) flag = 1;
        x *= a;
    }

    if(flag == 1){
            cout << -1 << '\n';
            return 0;
    }


    cout << x << '\n';


    return 0;
}
