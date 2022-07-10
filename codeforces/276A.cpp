#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    int m=INT_MIN;
    for(int i=0;i<n;i++){
    	int a,b;
    	cin>>a>>b;
    	if(b>=k){
    		int j=a-b+k;
    		m=max(m,j);
    	}
    	else m=max(m,a);
    }
    cout<<m;
}