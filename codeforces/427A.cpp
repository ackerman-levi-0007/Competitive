#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, x;
	cin >> n;
	int ans = 0, police = 0;
	for(int i=0 ; i<n ; i++){
		cin >> x;
		if(x > 0) police += x;
		else{
			if(police == 0) ans++;
			else police = police + x;
		}
	}
	cout << ans <<"\n";
	return 0;
}