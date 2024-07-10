#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, t, t_atual = 0;
    cin >> n >> m >> t;
    long long int max = n;

    vector<pair<long long int, long long int>> cafe;
    for(int i = 0; i < m; i++){
    	pair<long long int, long long int> c;
	cin >> c.first >> c.second;
	cafe.push_back(c);
    }

    int cafe_atual = 0;
    while(cafe_atual < m){
	if(n <= 0) break;
	if(t_atual < cafe[cafe_atual].first){
	    n -= (cafe[cafe_atual].first - t_atual);
  	    t_atual = cafe[cafe_atual].first;
	}
	else if(cafe[cafe_atual].first <= t_atual && t_atual < cafe[cafe_atual].second){
	    if(n + (cafe[cafe_atual].second - cafe[cafe_atual].first) < max)
	    	n += (cafe[cafe_atual].second - cafe[cafe_atual].first);
	    else n = max;
	    
	    t_atual = cafe[cafe_atual].second;
	    cafe_atual++;
	}
    }

    n -= (t - t_atual);

    if(n <= 0) cout << "No\n";
    else cout << "Yes\n";


}
