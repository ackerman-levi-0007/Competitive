#include<bits/stdc++.h>
using namespace std;
#define ll long long

void reverse(vector<int>& a, int n, int l,int m)
{
	int k=m;
  	for (int i = l; i <= m; i++){
  		if(i>=k) break;
  		else swap(a[i],a[k]);
  		k--;
  	}
  	return;
}

int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int n;
		cin >> n;
		//int a[n];
		//for(int i=0 ;i < n;i++) cin >> a[i];
		
		vector<int> a;
		a.clear();
		for(int i=0 ;i < n;i++){
		    int l;
		    cin>>l;
		    a.push_back(l);
		}
		
		int sum=0; 
		for(int i=0;i<n;i++){
			if(a[i]==i+1){
			    sum++;
			    continue;
			}
			else{
				int j;
				for(j=i;j<n;j++) {if(a[j]==i+1) break;}
				reverse(a,n,i,j);
				sum=sum+j-i+1; 
			}
		}
		cout<<"Case #"<<q+1<<": "<<sum-1<<"\n";
	}
	return 0;
}