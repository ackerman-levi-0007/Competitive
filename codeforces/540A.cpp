#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i=0 ; i<n ; i++){
		int x = abs(a[i]-b[i]);
		int y = 9-(a[i]-'0') + (b[i]-'0') + 1;
		int z = 9-(b[i]-'0') + (a[i]-'0') + 1;
		ans += min({x,y,z});
	}
	cout << ans << "\n";
}