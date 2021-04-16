#include<bits/stdc++.h>
using namespace std;
#define ll long long

void fun(string a,int x,int y,int &sum){
	int n=a.size();
	if(a[0]=='?'){
		int k=0;
		char c;
		for(int i=0;i<n;i++){
			if(a[i]!='?'){
				k=i;
				c=a[i];
				break;
			}
		}

		for(int i=0;i<k;i++) a[i]=c;
		for(int i=k;i<n;i++) if(a[i]=='?') a[i]=a[i-1];
	}
	else{
		for(int i=1;i<n;i++){
			if(a[i]=='?') a[i]=a[i-1];
		}
	}
	for(int i=1;i<n;i++){
		if(a[i-1]=='C' && a[i]=='J') sum+=x;
		if(a[i-1]=='J' && a[i]=='C') sum+=y;
	}
	return;
}

void fun1(string a,int x,int y,int& sum){
	int n=a.size();
	if(a[1]=='?'){
		int k=0;
		for(int i=1;i<n-1;i++){
			if(a[i]!='?'){
				k=i;
				break;
			}
		}

		for(int i=k-1;i>=1;i--){
			if(a[i+1]=='J') a[i]='C';
			else a[i]='J';
		}
		for(int i=k;i<n-1;i++){
			if(a[i]=='?'){
				if(a[i-1]=='J') a[i]='C';
				else a[i]='J';
			}
		}
	}
	else{
		for(int i=1;i<n-1;i++){
			if(a[i]=='?'){
				if(a[i-1]=='J') a[i]='C';
				else a[i]='J';
			}
		}
	}
	if(a[0]=='?'){
		if(x<0 && y<0){
			if(a[1]=='J') a[0]='C';
			else a[0]='J';
		}
		else if(x<0){
			if(a[1]=='J') a[0]='C';
			else a[0]='J';
		}
		else if(y<0){
			if(a[1]=='C') a[0]='J';
			else a[0]='J';
		}
	}

	if(a[n-1]=='?'){
		if(x<0 && y<0){
			if(a[n-2]=='J') a[n-1]='C';
			else a[n-1]='J';
		}
		else if(x<0) a[n-1]='J';
		else if(y<0) a[n-1]='C';
	}

	for(int i=1;i<n;i++){
		if(a[i-1]=='C' && a[i]=='J') sum+=x;
		if(a[i-1]=='J' && a[i]=='C') sum+=y;
	}
	return;
}

int main(){
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int x,y,sum=0;
		cin >> x >> y;
		string a;
		cin >> a;
		if(x+y>0) fun(a,x,y,sum); 
		else fun1(a,x,y,sum);
		cout<<"Case #"<<q+1<<": "<<sum<<"\n";
	}
	return 0;
}