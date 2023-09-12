#include <bits/stdc++.h>
using namespace std;

typedef struct aluno{
    int marca, id, expulso;
    vector<aluno*> vizinhos;
}aluno;

bool oprimir(vector<aluno>& alunos){
    int n = alunos.size() - 1;
    bool oprimiu = false;

    for(int i = 1; i <= n; i++){
        if(alunos[i].expulso == 1) continue;
        if(alunos[i].vizinhos.size() == 1){
            alunos[i].marca = 1;
            oprimiu = true;
        }
    }   
    if(!oprimiu) return oprimiu;

    for(int i = 1; i <= n; i++){
        for(auto e = alunos[i].vizinhos.begin(); e != alunos[i].vizinhos.end();){
            if((*e)->marca == 1) e = alunos[i].vizinhos.erase(e);
            else e++;
        }
    }

    for(int i = n; i > 0; i--){
        if(alunos[i].marca == 1) alunos[i].expulso = 1;        
    }


    return oprimiu;
}


int main(){
    int n, m;
    cin >> n >> m;

    vector<aluno> alunos(n + 1);
    for(int i = 1; i <= n; i++){
        alunos[i].marca = 0;
        alunos[i].id = i;
        alunos[i].expulso = 0;
    }

    for(int i = 0; i < m; i++){
        int alunoA, alunoB;
        cin >> alunoA >> alunoB;

        alunos[alunoA].vizinhos.push_back(&alunos[alunoB]);
        alunos[alunoB].vizinhos.push_back(&alunos[alunoA]);
    }

    int grupos = 0;

    while(oprimir(alunos)) grupos++;
    cout << grupos << '\n';


    return 0;
}