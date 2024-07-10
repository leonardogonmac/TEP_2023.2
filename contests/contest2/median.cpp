#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());
    if(n % 2 == 0)
        cout << (v[n/2] + v[n/2 + 1])/2 << '\n';
    else
        cout << v[(n + 1)/2];

    return 0;
}