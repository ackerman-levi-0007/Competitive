#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
    cin >> n >> k;
    int a[n],sum=0;
    for(int i=0 ; i<n ;i++){
    	cin >> a[i];
    }
    for(int i=0;i<n,k>0;i++){
    	if(a[i]<0){
    		a[i]=-1*a[i];
    		k--;
    	}
    	else break;
    }
    sort(a,a+n);
    if(k>0){
    	if(k%2!=0) a[0]=-1*a[0];
    }
    for(int i=0;i<n;i++) sum+=a[i];
	cout<<sum;
    return 0;
}