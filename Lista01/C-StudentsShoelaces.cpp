#include <bits/stdc++.h>
using namespace std;

typedef struct aluno{
    int marca;
    vector<aluno*> vizinhos;
}aluno;

bool oprimir(vector<aluno>& alunos){
    int n = alunos.size() - 1;
    bool oprimiu = false;
    for(int i = 0; i <= n; i++){
        if(alunos[i].vizinhos.size() == 1){
            alunos[i].marca = 1;
            oprimiu = true;
        }
    }   
    if(!oprimiu) return oprimiu;
    
    
    for(int j = 0; j <= n; j++){
        int x = alunos[j].vizinhos.size();
        for(int i = 0; i < x; i++){
            if(alunos[j].vizinhos[i]->marca == 1){
                alunos[j].vizinhos.erase(alunos[j].vizinhos.begin() + i);
                x--;
                i--;

            }
        }
    }

    for(int i = 0; i <= n; i++){
        if(alunos[i].marca == 1){
            alunos.erase(alunos.begin() + i);
            n--;
            i--;
        }
    }

    return oprimiu;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<aluno> alunos(n + 1);
    for(auto e: alunos)
        e.marca = 0;

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