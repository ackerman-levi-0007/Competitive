#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1 , s2, s3;
  	cin >> s1 >> s2 >> s3;
  	string t, ans = "";
  	cin >> t;
  	for(int i=0 ; i<t.size() ; i++){
    	int x = t[i]-'0';
      	if(x==1) ans += s1;
      	if(x == 2) ans += s2;
      	if(x==3) ans += s3;
    }
  	cout << ans << "\n";
}