#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ans=0;
	int arr[n][2];
	for(int i=0 ; i<n ;i++) cin >> arr[i][0] >> arr[i][1];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i==j) continue;
			if(arr[i][0]==arr[j][1]) ans++;
		}
	}
	cout << ans << "\n";
	return 0;
}