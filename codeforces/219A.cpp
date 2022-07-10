#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int k;
    cin>>k;
    string s,l;
    cin>>s;
    if(k==1){
    	cout<<s;
    	return 0;
    }
    int a[26]={0};
    int n=s.size();
    for(int i=0;i<n;i++){
    	int x=s[i]-'a';
    	a[x]++;
    }
    for(int i=0;i<26;i++){
    	if(a[i]%k!=0){
    		cout<<"-1";
    		return 0;
    	}
    	a[i]=a[i]/k;
    	for(int j=0;j<a[i];j++){
    		char c=i+'a';
    		l.push_back(c);
    	}
    }
    for(int i=0;i<k;i++) cout<<l;
    return 0;
}