#include <bits/stdc++.h>
using namespace std;

bool tem_caminho(vector<int>& vizinhos1, vector<int>& vizinhosN, int n){
    for(int i = 1; i <= n; i++)
        if(vizinhos1[i] == 1 && vizinhosN[i] == 1) return true;

    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vizinhos1(n + 1);
    vector<int> vizinhosN(n + 1);

    for(auto e: vizinhos1) e = 0;
    for(auto e: vizinhosN) e = 0;

    for(int i = 0; i < m; i++){
        int origem, destino;
        cin >> origem >> destino;

        if(origem == 1) vizinhos1[destino] = 1;
        if(destino == 1) vizinhos1[origem] = 1;

        if(origem == n) vizinhosN[destino] = 1;
        if(destino == n) vizinhosN[origem] = 1; 
    }

    bool caminho = tem_caminho(vizinhos1, vizinhosN, n);
    printf(caminho ? "POSSIBLE\n": "IMPOSSIBLE\n");
    return 0;
}