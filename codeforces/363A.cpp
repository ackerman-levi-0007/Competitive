#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n = s.size();
	vector<string> v;
	v.push_back("O-|-OOOO");
	v.push_back("O-|O-OOO");
	v.push_back("O-|OO-OO");
	v.push_back("O-|OOO-O");
	v.push_back("O-|OOOO-");
	v.push_back("-O|-OOOO");
	v.push_back("-O|O-OOO");
	v.push_back("-O|OO-OO");
	v.push_back("-O|OOO-O");
	v.push_back("-O|OOOO-");
	for(int i=n-1 ; i>=0 ; i--){
		cout << v[s[i]-'0'] <<"\n";
	}
	return 0;
}