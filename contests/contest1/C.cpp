#include <bits/stdc++.h>
using namespace std;

typedef struct aluno{
    int id, num;
}aluno;

int compare(const void *a, const void *b) {
  
    aluno *alunoA = (aluno *)a;
    aluno *alunoB = (aluno *)b;
  
    return (alunoB->num - alunoA->num);
}

int main(){
    int n;
    cin >> n;
    aluno v[n];
    for(int i = 0; i < n; i++){
        v[i].id = i;
        cin >> v[i].num;
    }
    qsort(v, n, sizeof(aluno), compare);

    for(int i = n- 1; i > -1; i--) cout << v[i].id + 1 << ' ';
    cout << '\n';

    return 0;
}
