#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n,h,x;
	cin>>n>>h>>x;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	if(x==h){
	    cout<<"yes";
	    return 0;
	}
	for(int i=0;i<n;i++){
	    if(x+a[i]>=h){
	        cout<<"yes";
	        return 0;
	    }
	    if(x>h) break;
	}
	cout<<"no";
	return 0;
}