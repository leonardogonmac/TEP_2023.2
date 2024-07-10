#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, aux;
	cin >> n;
	aux = n;

	if(aux == 1){
		cout << 1;
		return 0;
	}

	list<long long int> v;
	long long int metade;
	for(long long int d = 1; d*d <= n; d++){
		if(n % d == 0){
			cout << d << '\n';
			v.push_front(n/d);
			metade = d;	
		}	
	}
	for(auto e: v){
		if(e == metade) continue;
		cout << e << '\n';
	}



	return 0;
}
