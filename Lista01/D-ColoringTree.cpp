#include <bits/stdc++.h>
using namespace std;

typedef struct vertice{
    int id;
    int cor;
    vector<struct vertice*> vizinhos; 
}vertice;

int PASSOS = 0;

void pinta(vertice* ver, int cor){
    ver->cor = cor;
    int x = ver->vizinhos.size();
    for(int i = 0; i < x; i++)
        pinta(ver->vizinhos[i], cor);
}

void desce_arvore(vertice* ver, int* cores){
    if(ver->cor != cores[ver->id]) {
        pinta(ver, cores[ver->id]);
        PASSOS++;
    }

    int x = ver->vizinhos.size();
    for(int i = 0; i < x; i++)
        desce_arvore(ver->vizinhos[i], cores);
}

int main(){
    int n;
    cin >> n;
    vector<vertice> v(n + 1);
    for(int i = 0; i < n + 1; i++){
        v[i].cor = 0;
        v[i].id = i;
    }
    
    for(int i = 2; i <= n; i++){
        int vizinho;
        cin >> vizinho;
        v[vizinho].vizinhos.push_back(&v[i]);
    }
    int cores[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> cores[i];
    }

    desce_arvore(&v[1], cores);

    cout << PASSOS << '\n';

    return 0;
}