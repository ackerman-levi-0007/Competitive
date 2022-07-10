#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int> s;
    s.clear();
    while(n>0){
    	int x=n%10;
    	s.push_back(x);
    	n=n/10;
    }
    int l=s.size();
    for(int i=l-1;i>=0;i--){
    	if(s[i]==1 && s[i-1]==4 && s[i-2]==4) i=i-2;
    	else if(s[i]==1 && s[i-1]==4) i=i-1;
    	else if(s[i]==1) continue;
    	else{
    		cout<<"NO";
    		return 0;
    	} 
    }
    cout<<"YES";
    return 0;
}