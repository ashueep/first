#include<bits/stdc++.h>
using namespace std;
int n=4, m=6, dp[(int)1e2+2][(int)1e2+2];
int dist[10][10] = {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
};
bool vis[102][102];
int tsp(int mask, int pos){
	if(mask == (1<<n) - 1) return dist[pos][0];
	if(vis[mask][pos]) return dp[mask][pos];

	for(int i = 0 ; i < n ; i++){
		if(mask & (1<<i) == 0){
			dp[mask][pos] = min(dp[mask][pos],dist[pos][i] + tsp(mask|(1<<i),i));
			vis[mask][pos] = true;
		}
	}
	return dp[mask][pos];
}


int main(){

	/*cin >> n;


	for(int i = 0 ; i < m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		dist[x-1][y-1] = w;
		dist[y-1][x-1] = w;
	}*/

	for(int i = 0 ; i < 101; i++){
		for(int j = 0 ; j < 101 ; j++){
			vis[i][j] = false;
			dp[i][j] = 1e9;
		}
	}

	cout << tsp(1, 0);

}