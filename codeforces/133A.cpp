#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    int x=s.size();
    for(int i=0;i<x;i++){
    	if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
    		cout<<"YES";
    		return 0;
    	}
    }
    cout<<"NO";
    return 0;
}