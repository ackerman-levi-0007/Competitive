#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		ll k=min(min(e,h),n);
		ll answer=100000000000000000;
		for(int i=0;i<=k;i++){
			ll l=0;
			ll q1=(e-i)/2;
			ll q2=(h-i)/3;
			l=i*c;
			if((q1+q2)>=(n-i)){
				if(a<b){
					if(q1>=(n-i)) l=l+((n-i)*a);
					else{
						l=l+(q1*a)+((n-i-q1)*b);
					}
					answer=min(answer,l);
				}
				else{
					if(q2>=(n-i)) l=l+((n-i)*b);
					else{
						l=l+(q2*b)+((n-i-q2)*a);
					}
					answer=min(answer,l);
				}
			}
		}
		if(answer==100000000000000000) cout<<"-1"<<"\n";
		else cout<<answer<<"\n";
	}
	return 0;
}