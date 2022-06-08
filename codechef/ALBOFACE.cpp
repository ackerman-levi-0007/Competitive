#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve() {
	ll n, walk = 0, length = 0, m ; 
	cin >> n;
	vector<ll> vec;

	while(n){
	    walk = 0;
		if(n%2==0){
			while(n % 2 == 0){
				walk++;
				n = n/2;
			}
			vec.push_back(walk);
		}
		else{
			n--;
			vec.push_back(1);		
		}
	}
	for(int j = vec.size()-1 ; j>=0 ; j--){
		m = vec[j];
		if(m != 1 ){
			if(length % 2 != 0){
				length+=2;
			}
			else{
				length++;
			}
		}
		else{
			length++;
		}
	}

	if(length % 2 != 0){
		cout << "Alice\n";
	}else{
		cout << "Bob\n";
	}
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
    	solve();
    }
	return 0;
}


