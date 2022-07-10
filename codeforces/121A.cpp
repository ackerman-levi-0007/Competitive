#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fun(vector<ll>& s,ll x,ll j){
	s.push_back(x);
	j++;
	if(j==10) return;
	fun(s,(10*x)+4,j);
	fun(s,(10*x)+7,j);
}
int main(){
	vector<ll> s;
	s.clear();
	ll x=4,j=0;
	fun(s,x,j);
	x=7;j=0;
	fun(s,x,j);
	sort(s.begin(),s.end());
	ll l,r;
	cin>>l>>r;
	int n=s.size();
	x=0;j=0;
	for(int i=0;i<n;i++){
		if(s[i]>=l){
			x=i;
			break;
		}
	}
	for(int i=x;i<n;i++){
		if(s[i]>=r){
			j=i;
			break;
		}
	}
	ll sum=0;
	if(l==r) cout<<s[x];
	else if(x==j){
	    sum=sum+(s[x]*(r-l+1));
	    cout<<sum;
	}
	else{
		sum=sum+(s[x]*(s[x]-l+1));
		for(int i=x+1;i<j;i++){
			sum=sum+(s[i]*(s[i]-s[i-1]));
		}
		sum+=s[j]*(r-s[j-1]);
		cout<<sum;
	}
    return 0;
}