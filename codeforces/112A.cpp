#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    string a,b;
    cin>>a>>b;
    int x=a.size();
    for(int i=0;i<x;i++){
    	if(a[i]<=90) a[i]=a[i]+32;
    	if(b[i]<=90) b[i]=b[i]+32;
    	if(a[i]>b[i]){
    		cout<<"1";
    		return 0;
    	}
    	if(a[i]<b[i]){
    		cout<<"-1";
    		return 0;
    	}
    }
    cout<<"0";
    return 0;
}