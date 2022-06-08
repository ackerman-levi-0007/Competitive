#include<bits/stdc++.h> 
using namespace std;

void answer(){
    int n,p,result=1,len;
		vector<pair<int,int>> a,b;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p;
			a.push_back({i+1,p});
		}
		b.push_back(a[0]);
		b.push_back(a[1]);
		len=b.size();
		if(n!=2){
			for(int i=2;i<n;i++){
				while(b.size()>=2){
				    double q,w,e,r;
				    q=((double)b[len-1].second-(double)b[len-2].second);
				    w=((double)b[len-1].first-(double)b[len-2].first);
				    e=((double)a[i].second-(double)b[len-1].second);
				    r=((double)a[i].first-(double)b[len-1].first);
					if((q/w)>(e/r)) break;
					else{
						len--;
						b.pop_back();
					}
				}
				len++;
				b.push_back(a[i]);
				result=max(result,b[len-1].first-b[len-2].first);
			}
		}
		cout<<result<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		answer();
	}
	return 0;
}