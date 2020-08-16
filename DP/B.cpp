#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

const ll ARR = 1e5;
const ll INF = 1e9;
const ll MOD = 1e9+7;


void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<int> dp(n, INF); 
    dp[0] = 0; 
 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j <= i + k; j++) { 
            if (j < n)
                dp[j] = min(dp[j], dp[i] + abs(a[j] - a[i]));
        }
    }
    cout << dp[n - 1];
    return;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
	ll t = 1;
	scanf("%d",&t);
	while(t--) solve();
	return 0;
}

