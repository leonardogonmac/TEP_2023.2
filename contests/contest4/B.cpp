#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;

	int d[n], che = 0;
	long long int  eu = 0, man = 0;
	for(int i = 0; i < n; i++){
		cin >> d[i];
		man += abs(d[i]);
		eu += d[i]*d[i];
		if(abs(d[i]) > che) che = abs(d[i]);
	}

	cout << man << '\n' << fixed  << setprecision(15) << sqrt(eu) << '\n' << che << '\n';
	


	return 0;
}
