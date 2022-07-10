#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int a, b;
	cin >> a >> b;
	int x=0 , y=0 , z=0;
	for(int i=1;i<=6;i++){
		int n = abs(a-i) , m = abs(b-i);
		if(n<m) x++;
		else if(n>m) z++;
		else y++; 
	}
	cout << x << " " << y << " " << z << "\n";
	return 0;
}