#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int arr[m+1];
	memset(arr,0,sizeof(arr));
	for(int i=0 ; i<n ;i++){
		int x;
		cin >> x;
		for(int j=0 ; j<x ; j++){
			int t;
			cin >> t;
			arr[t]++;
		}
	}
	int d=0;
	for(int i=1;i<=m;i++){
		if(arr[i]==0){
			d++;
			break;
		}
	}
	if(d==0) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}