#include <bits/stdc++.h>
using namespace std;

typedef struct vertex{
    int cat, id, visited;
    vector<vertex*> neighbors;
}vertex;

int PATHS = 0;

void find_paths(vertex* v, int cats, int max){
    v->visited = 1;
    if(v->cat == 0) cats = 0;
    else cats += v->cat;
    
    if(cats > max) return;
    
    int x = v->neighbors.size(), flag = 0;
    if(x == 1 && v->neighbors[0]->visited == 1){
        PATHS++;
        return;
    }
    
    
    for(int i = 0; i < x; i++)
        if(v->neighbors[i]->visited == 0)
            find_paths(v->neighbors[i], cats, max);


}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vertex> tree(n + 1);
    for(int i = 1; i <= n; i++){ 
        tree[i].visited = 0;
        tree[i].id = i;
        cin >> tree[i].cat;
    }

    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        tree[x].neighbors.push_back(&tree[y]);
        tree[y].neighbors.push_back(&tree[x]);
    }
    
    find_paths(&tree[1], 0, m);

    cout << PATHS << '\n';

    return 0;
}