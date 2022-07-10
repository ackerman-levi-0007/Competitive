#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
	int l=n/3;
	int x[l]={0},y[l]={0},z[l]={0};
	for(int i=0;i<l;i++){
		x[i]=a[i];
		y[i]=a[i+l];
		z[i]=a[i+l+l];
	}
	for(int i=0;i<l;i++){
		if(z[i]%y[i]!=0 || y[i]%x[i]!=0 || z[i]==y[i] || y[i]==x[i]){
			cout<<"-1";
			return 0;
		}
	}
	for(int i=0;i<l;i++){
		cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<"\n";
	}
    return 0;
}