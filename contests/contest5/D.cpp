#include <bits/stdc++.h>
using namespace std;

typedef struct plano{
    int begin;
    int end;
    int valor;
}plano;

int main(){
    int n, c;
    cin >> n >> c;
    vector<plano> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i].begin >> p[i].end >> p[i].valor;

    int dia = 1;
    int money = 0;


    return 0;
}