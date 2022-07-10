#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, x, y;
	cin >> n;
	int ans = 0;
	for(int i=0 ; i<n ; i++){
		cin >> x >> y;
		if(y-x >= 2) ans++;
	}
	cout<<ans<<"\n";
	return 0;
}