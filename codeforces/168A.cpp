#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int w=y*n;
	if(w%100==0) w=w/100;
	else w=1+(w/100);

	if(w>x) cout<<w-x;
	else cout<<"0";
	return 0;
}