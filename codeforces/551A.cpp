#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int a1[2001] = {0};
	for(int i=0 ; i<n ; i++){
		cin >> arr[i];
		a1[arr[i]]++;
	}
	int rank = 1;
	for(int i=2000 ; i>=1 ; i--){
		if(a1[i]!=0){
			int x=a1[i];
			a1[i] = rank;
			rank += x;
		}
	}
	for(int i=0 ; i<n ; i++){
		arr[i] = a1[arr[i]];
		cout << arr[i] <<" ";
	}
	cout<<"\n";
	return 0;
}