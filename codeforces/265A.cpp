#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	int n = b.size();
	int j=0;
	for(int i=0 ; i<n ; i++){
		if(b[i]==a[j]) j++;
	}
	cout << j+1 <<"\n";
	return 0;
}