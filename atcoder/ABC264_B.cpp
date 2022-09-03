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

    int arr[15][15];
    F0R(i,15){
    	arr[0][i] = 1;
    	arr[i][0] = 1;
    	arr[14][i] = 1;
    	arr[i][14] = 1;
    }
    FOR(i,2,13){
    	arr[2][i] = 1;
    	arr[i][2] = 1;
    	arr[12][i] = 1;
    	arr[i][12] = 1;
    }
    FOR(i,4,11){
    	arr[4][i] = 1;
    	arr[i][4] = 1;
    	arr[10][i] = 1;
    	arr[i][10] = 1;
    }
    FOR(i,6,9){
    	arr[6][i] = 1;
    	arr[i][6] = 1;
    	arr[8][i] = 1;
    	arr[i][8] = 1;
    }
    int c, r;
    cin >> c >> r;
    if(arr[c-1][r-1] == 1) cout<<"black\n";
    else cout<<"white\n";
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


