#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int ans=0;
	for(int i=0 ; i<n ; i++){
		string str;
		cin >> str;
		int d=0;
		for(int j=0;j<str.size();j++){
			if(str[j]=='4' || str[j]=='7') d++;
		}
		if(d<=k) ans++;
	}
	cout << ans << "\n";
	return 0;
}