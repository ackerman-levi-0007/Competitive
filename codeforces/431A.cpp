#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	string s;
	cin >> s;
	int n=s.size();
	int ans=0;
	for(int i=0;i<n;i++){
		ans += arr[s[i]-'1'];
	}
	cout << ans <<"\n";
	return 0;
}