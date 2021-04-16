#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	int max=x,min=x,y=0,z=0;
	for(int i=1;i<n;i++){
		cin>>x;
		if(x>max){
			max=x;
			y=i;
		}
		if(x<=min){
			min=x;
			z=i;
		}
	}
	if(z>y) cout<<y-z+n-1;
	else cout<<y-z+n-2;
	return 0;
}