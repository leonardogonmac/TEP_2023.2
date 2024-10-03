#include <bits/stdc++.h>
using namespace std;

/*int split(int* v, int l, int r, int size){
	if(l == r - 1){
		return ((v[l] > v[r]) ? l : r);
	}
	
	int left = split(v, l, r/2, size);
	int right = split(v, r/2 + 1, r, size);

	if(l == 1 && r == size)
		return ((v[left] > v[right]) ? right : left);

	return ((v[left] > v[right]) ? left : right);
}*/

int busca(int* w, int valor, int t){
	for(int i = 1; i <= t; i++)
		if(valor == w[i]) return i;

}

int main(){
	int n, t = 1;
	cin >> n;
	for(int i = 0; i < n; i++)
		t *= 2;	

	int* v = (int*) malloc(sizeof(int)*(t + 1));
	int* w = (int*) malloc(sizeof(int)*(t + 1));
	for(int i = 1; i <= t; i++){
		cin >> v[i];
		w[i] = v[i];
	}



	int aux = t;
	int* vec = v;
	while(aux > 2){
		int aux2 = aux/2;
		int* v2 = (int*) malloc(sizeof(int)*(aux2 + 1));
		int j = 1;
		for(int i = 1; i < aux; i+=2){
			if(vec[i] > vec[i + 1]) v2[j] = vec[i];
			else v2[j] = vec[i + 1];
			j++;
		}
		free(vec);
		vec = v2;
		aux /= 2;
	}
		cout << (vec[1] < vec[2] ? busca(w, vec[1], t) : busca(w, vec[2], t)) << '\n';

	return 0;
}
