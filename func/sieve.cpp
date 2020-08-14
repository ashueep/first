#include <bits/stdc++.h> 
using namespace std; 
  
const int ARR = 1e5;
bool prime[ARR];
void sieve(int n) 
{ 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
        if (prime[p]) 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
} 

int main() 
{ 
    int n;
    cin >> n; 
    sieve(n); 
    for(int i = 2 ; i < n ; i++) if(prime[i]) cout << i << " ";
    printf("\n");
    return 0; 
} 