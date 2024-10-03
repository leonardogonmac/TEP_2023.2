#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0, n;
	cin >> n;
	int a[n + 1], b[n + 1];

	for(int i = 1; i <= n; i++)
		cin >> a[i];

	for(int i = 1; i <= n; i++)
		cin >> b[i];

	for(int i = 1; i <= n; i++)
		ans += a[i]*b[i];

	cout << ((ans == 0) ? "Yes\n":"No\n");

	return 0;
}
