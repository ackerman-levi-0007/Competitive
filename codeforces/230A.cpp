#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int s,n,x=0;
	cin>>s>>n;
	int a[n][2];
	for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j][0]>a[j+1][0]){
				swap(a[j][0],a[j+1][0]);
				swap(a[j][1],a[j+1][1]);
			}
		}
	}

	for(int i=0;i<n;i++){
		if(s>a[i][0]){
			s=s+a[i][1];
			x++;
		}
		else break;		
	}

	if(x==n) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}