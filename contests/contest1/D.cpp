#include <bits/stdc++.h>
using namespace std;

bool isPrime(long int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (long int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

/*int fatoracao2(long int x){
    int contador = 1;
    for(long int i = 2; i <= (x/2 + 1); i++){
        if(isPrime(i) && x % i == 0) contador++;
    }
    return contador;
}

int fatoracao(long long x){
    long long lim = 2*((long long) sqrt(x) + 1); 
    int contador = 1;
    
    vector<long long> v(lim + 1, 0);
    for(long long i = 2; i <= lim; i++){
        if(v[i] == 0){
            for(long long j = i + 1; j <= lim; j++)
                if(j % i == 0) v[j] = 1;
        }
    }

    for(long long i = 2; i <= lim; i++)
        if(v[i] == 0 && x % i == 0) contador++;


    return contador;
}
*/

int fatoracao3(long int x){
    int contador = 1;
    long int aux = x;
    if(aux % 2 == 0) contador++;
    
    while(aux % 2 == 0)
        aux /= 2;
    
    for(int i = 3; i <= sqrt(x); i+=2){
        if(aux % i == 0){
                contador++;
            
            }
        while(aux % i == 0){
                aux /= i;

            }
        
        }

    return contador;

}

int main(){
    long int a, b;
    cin >> a >> b;
    long int x = gcd(a, b);

    cout << fatoracao3(x) << '\n';

    return 0;
}