#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=0;
	cin >> n;
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	int a[2];
	cin >> a[0] >> a[1];
	sort(a,a+2);
	int ans = 0;
	for(int i=a[0]-1 ; i<a[1]-1 ; i++) ans += arr[i];
	ans = min(ans,sum-ans);
	cout<<ans<<"\n";
	return 0;
}