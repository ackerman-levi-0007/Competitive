#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a=0 , b=0;
	for(int i=0 ; i<n ; i++){
		if(s[i]=='X') a++;
		else b++;
	} 
	int ans = abs(b-a)/2;
	if(a>b){
		int x=ans,i=0;
		while(x>0){
			if(s[i]=='X'){
				s[i]='x';
				x--;
			}
			i++;
		}
	}
	else if(a<b){
		int x=ans,i=0;
		while(x>0){
			if(s[i]=='x'){
				s[i]='X';
				x--;
			}
			i++;
		}
	}
	cout << ans << "\n" << s << "\n";
	return 0;
}