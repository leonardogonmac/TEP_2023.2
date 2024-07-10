#include <bits/stdc++.h>
using namespace std;

using var = pair<long long int, int>;

vector<var> mul_pol(vector<var>& g, vector<var>& pol, int n){
    vector<var> ans(n + 1);

    for(int i = 0; i <= n; i++){
    	ans[i].first = 0;
	ans[i].second = i;
    }

    for(int i = 0; i <= n; i++){
	for(int j = 0; j <= n; j++){
            if(i + j <= n)
	       ans[i + j].first += g[i].first*pol[j].first; 
	}
    }

    return ans;
}


int main(){
    long long int l;
    cin >> l;
    vector<var> g, pol(l - 11);
    
    for(int i = 0; i <= l - 12; i++){
    	pol[i].first = 1;
	pol[i].second = i;
	g.push_back(pol[i]);
    }


    for(int i = 0; i < 11; i++){
    	g = mul_pol(g, pol, l - 12);
    }

    cout << g[l - 12].first << '\n';
    return 0;	
}
