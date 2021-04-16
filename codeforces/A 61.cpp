#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    string a,b;
    cin>>a>>b;
    int x=a.size();
    for(int i=0;i<x;i++){
    	if(a[i]==b[i]) cout<<"0";
    	else cout<<"1";
    }
    return 0;
}