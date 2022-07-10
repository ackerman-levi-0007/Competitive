#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int a=0 , b=0, c=0;
	for(int i=0 ; i<n ; i++){
		cin >> arr[i];
		if(i%3==0) a +=arr[i];
		if(i%3==1) b +=arr[i];
		if(i%3==2) c +=arr[i];
	}
	if(a>b && a>c) cout << "chest\n";
	else if(b>c && b>a) cout << "biceps\n";
	else cout << "back\n";
	return 0;
}