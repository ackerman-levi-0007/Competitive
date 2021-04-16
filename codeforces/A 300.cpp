#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,z=0;
    cin>>n;
    vector<int> ne,np;
    ne.clear();
    np.clear();
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	if(x<0) ne.push_back(x);
    	else if(x==0) z++;
    	else np.push_back(x);
    }
    int nes=ne.size();
    if(nes%2!=0){
    	cout<<1<<" "<<ne[0]<<"\n"<<np.size()+nes-1<<" ";
    	for(int i=1;i<nes;i++) cout<<ne[i]<<" ";
    	for(int i=0;i<np.size();i++) cout<<np[i]<<" ";
    	cout<<"\n"<<z<<" 0";
    }
    else{
    	cout<<1<<" "<<ne[1]<<"\n"<<np.size()+nes-2<<" ";
    	for(int i=2;i<nes;i++) cout<<ne[i]<<" ";
    	for(int i=0;i<np.size();i++) cout<<np[i]<<" ";
    	cout<<"\n"<<z+1<<" 0 "<<ne[0];
    }
    return 0;
}