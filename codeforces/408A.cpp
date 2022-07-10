#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int m = INT_MAX;
	for(int i=0 ; i<n ; i++) cin >> arr[i];
	for(int i=0 ; i<n ; i++){
		int x = arr[i];
		arr[i] = 0;
		int sum = 0;
		for(int j=0 ; j<x ; j++){
			int item;
			cin >> item;
			sum = sum + (item*5) + 15;
		}
		m = min(m,sum);
	}
	cout << m <<"\n";
	return 0;
}