#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down


void solve() {

    int n ; cin >> n;
    char arr[n][n];
    F0R(i,n){
    	F0R(j,n){
    		cin >> arr[i][j];
    	}
    }
    bool ans = true;
    F0R(i,n){
    	F0R(j,n){
    		if(i==j) continue;
    		else{
    			if(arr[i][j] == 'W'){
    				if(arr[j][i] != 'L'){
    					ans = false;
    					break;
    				}    				
    			}
    			else if(arr[i][j] == 'L'){
    				if(arr[j][i] != 'W'){
    					ans = false;
    					break;
    				}    				
    			}
    			else{
    				if(arr[i][j] != arr[j][i]){
    					ans = false;
    					break;
    				}
    			}
    		}
    	}
    	if(!ans) break;
    }
    if(ans) cout<<"correct\n";
    else cout<<"incorrect\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // time_t start , end;

    // time(&start);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


