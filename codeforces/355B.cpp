#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[4];
	for(int i=0 ; i<4 ; i++) cin >> arr[i];
	int n, m;
	cin >> n >> m;
	int bus[n], trolley[m];
	int sb=0, st=0;
	for(int i=0 ; i<n ; i++){
		cin >> bus[i];
		sb += bus[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> trolley[i];
		st += trolley[i];
	}
	
	sb *= arr[0];
	int sumb = sb;
	sort(bus, bus+n);
	for(int i=n-1 ; i>=0 ; i--){
		sb = sb - (bus[i]*arr[0]) + arr[1];
		sumb = min(sumb, sb);
	}
	sumb = min(sumb, arr[2]);

	st *= arr[0];
	int sumt = st;
	sort(trolley, trolley+m);
	for(int i=m-1 ; i>=0 ; i--){
		st = st - (trolley[i]*arr[0]) + arr[1];
		sumt = min(sumt, st);
 	}
 	sumt = min(sumt, arr[2]);

 	int ans = min(sumb+sumt , arr[3]);
 	cout << ans << "\n";
 	return 0;
}