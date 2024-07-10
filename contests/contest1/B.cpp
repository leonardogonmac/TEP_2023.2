#include <bits/stdc++.h>
using namespace std;

int maior(int h, int k){
    if(h >= k) return 1;
    return 0;
}

int main(){
    int n, k;
    cin >> n >> k;

    int v[n];
    int q = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        q += maior(v[i], k);
    }

    cout << q << '\n';

    return 0;
}
