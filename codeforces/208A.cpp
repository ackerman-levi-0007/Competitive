#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k=0;
    int n=s.size();
    while(k<n){
    	if(s[k]=='W' && s[k+1]=='U' && s[k+2]=='B') k=k+3;
    	else break;
    }
    int d=0;
    for(int i=k;i<n;i++){
    	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
    		if(d==0) cout<<" ";
    		d++;
    		i=i+2;
    	}
    	else{
    		cout<<s[i];
    		d=0;
    	}
    }
    return 0;
}