#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum1=0 , sum2=0 , x;
	for(int i=0 ; i<3 ; i++){
		cin >> x;
		sum1 += x;
	}
	for(int i=0 ; i<3 ; i++){
		cin >> x;
		sum2 += x;
	}
	int n;
	cin >> n;
	if(sum1%5 != 0) sum1 += 5;
	if(sum2%10 != 0) sum2 +=10;
	sum1 /= 5;
	sum2 /= 10;
	sum1 += sum2;
	if(sum1<=n) cout<<"YES\n";
	else cout << "NO\n";
}