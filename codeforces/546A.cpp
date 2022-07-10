#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll k, n, w;
	cin >> k >> n >> w;
	ll sum = w*(w+1);
	sum = sum/2;
	sum = sum*k;
	if(sum<=n) cout << "0\n";
	else cout << sum-n << "\n";
	return 0;
}