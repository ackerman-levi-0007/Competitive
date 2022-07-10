#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
    	if(s[i]<='Z') s[i]=s[i]+'a'-'A';
    	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') continue;
    	else cout<<"."<<s[i];
    }
    return 0;
}