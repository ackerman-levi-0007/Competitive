#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n<=2) cout << "-1";
	else{
		for(int i=n ; i>0 ; i--) cout << i <<" ";
	}
	cout<<"\n";
	return 0;
}