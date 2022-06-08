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

    ll ans = 0, n , m;
    
    cin >> m >> n;
    ll arr[m][n];
    
    F0R(i,m){
        F0R(j,n) cin >> arr[i][j];
    }

    ll x = -1, y = -1;
    ll maxi = -1, val = -1, sec = -1;
    F0R(i,m){
        ll tx = 0 , ty = 1;
        if(arr[i][0] < arr[i][1]) swap(tx , ty);
        maxi = max(arr[i][0] , arr[i][1]);
        sec = min(arr[i][0] , arr[i][1]);
        FOR(j,2,n){
            if(arr[i][j] > maxi){
                sec = maxi;
                maxi = arr[i][j];
                ty = tx;
                tx = j;
            }
            else if(arr[i][j] >= sec){
                sec = arr[i][j];
                ty = j;
            }
        }
        if(sec > val){
            val = sec;
            y = ty;
            x = tx;
        }
    }
    F0R(i,n){
        ll sum = -1;
        if(i==x || i==y) continue;
        F0R(j,m){ 
            sum = max(sum , arr[j][i]);
        }
        val = min(val , sum);
    }
    cout << val <<"\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}

