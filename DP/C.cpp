#include<bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define gof 			for(long long int i = 0 ; i < n ; i++)
#define for1(i,s,e) 	for(long long int i = s ; i < e ; i++)
#define forr(i,e,s) 	for(long long int i = e ; i >= s; i--)
#define gthru(i,n)		for(long long int i = 0 ; i < n ; ++i)
#define vi 				vector<long long int>
#define all(x) 			x.begin(), x.end()
#define pb(x) 			push_back(x)
#define maxv(x) 		*max_element(x)
#define minv(x) 		*min_element(x)
#define mkvec(type,a,n) vector<type> a(n)

const ll ARR = 1e5;
const ll INF = 1e9;
const ll mod = 1e9+7;

void IO()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

void solve(){
    ll n,a[ARR][3],dp[ARR][3]={0};
    cin >> n;
    gof{
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    dp[0][0] = a[0][0], dp[0][1] = a[0][1], dp[0][2] = a[0][2];
    for(ll i = 1 ; i < n ; i++){    
 
        dp[i][0] = a[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = a[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = a[i][2] + max(dp[i-1][1],dp[i-1][0]);
        
    }
 
    cout << max({dp[n-1][0],dp[n-1][1],dp[n-1][2]}) << endl;
 
    return;
 
}

int main(){
	IO();
    ll t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}


