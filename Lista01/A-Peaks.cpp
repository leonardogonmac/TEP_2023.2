#include <bits/stdc++.h>

using namespace std;

typedef struct obs{
    int h, id;
    struct obs* maior;

}obs;


int good_obs(vector<obs>& v){
    int tam = v.size();
    int good = 0;
    for(int i = 1; i < tam; i++)
        if(v[i].maior == NULL || v[i].h > v[i].maior->h) good++;
    
    return good;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<obs> v(n + 1);
    for(int i = 1; i <= n; i++){
        v[i].id = i;
        v[i].maior = NULL;
        cin >> v[i].h;
    }

    for(int i = 0; i < m; i++){
        pair<int, int> road;
        cin >> road.first >> road.second;
        
        if(v[road.first].maior == NULL || v[road.first].maior->h < v[road.second].h)
            v[road.first].maior = &v[road.second];
        if(v[road.second].maior == NULL || v[road.second].maior->h < v[road.first].h)
            v[road.second].maior = &v[road.first];
        

    }

    int good = good_obs(v);
    cout << good << '\n';

    return 0;
}