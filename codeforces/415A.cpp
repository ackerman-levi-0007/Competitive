#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, m, count = 0;
	cin >> n >> m;
	int arr[m];
	int ans[n+1];
	memset(ans,0,sizeof(ans));
	for(int i=0 ; i<m ; i++) cin >> arr[i];
	for(int i=0 ; i<m ; i++){
		if(count == n) break;
		for(int j=arr[i] ; j<=n ; j++){
			if(ans[j]==0){
				ans[j] = arr[i];
				count++;
			}
		}
	}
	for(int i=1 ; i<=n ; i++) cout << ans[i] << " ";
	return 0;
}