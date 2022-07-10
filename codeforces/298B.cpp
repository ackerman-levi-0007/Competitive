#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,s1,s2,e1,e2;
    cin>>n>>s1>>s2>>e1>>e2;
    string s;
    cin>>s;
    int j=0;
    for(int i=0;i<n;i++){
    	j++;
    	if(s1<e1 && s[i]=='E') s1++;
    	if(s1>e1 && s[i]=='W') s1--;
    	if(s2<e2 && s[i]=='N') s2++;
    	if(s2>e2 && s[i]=='S') s2--;
    	if(s1==e1 && s2==e2) break;
    }
    if(s1==e1 && s2==e2) cout<<j;
    else cout<<"-1";
    return 0;
}