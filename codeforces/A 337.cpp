#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
	int x=a[m-1],y=0;

	for(int i=0;i<m-n+1;i++){
		y=a[n+i-1]-a[i];
		x=min(x,y);
	}
	cout<<x;
    return 0;
}