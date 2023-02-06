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

bool check()
void solve() {

    int h1, w1;
    cin >> h1 >> w1;
    ll arr1[h1][w1];
    F0R(i,h1){
    	F0R(j,w1) cin >> arr1[h1][w1];
    }

    int h2, w2;
    cin >> h2 >> w2;
    ll arr2[h2][w2];
    F0R(i,h2){
    	F0R(j,w2) cin >> arr2[h2][w2];
    }

    bool ans = false;
    F0R(i,h1){
    	F0R(j,w1){
    		if(arr1[i][j] == arr2[0][0] && h1-i-1 >= h2 && w1-j-1 >= w2){
    			ans = check()
    		}
    		if(ans) break;
    	}
    	if(ans) break;
    }
    if(ans) cout<<"Yes\n";
    else cout<<"No\n";
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


