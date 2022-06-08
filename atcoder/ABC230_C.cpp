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

    ll n, a, b, p, q, r, s;
    cin >> n >> a >> b >> p >> q >> r >> s;
   	ll x = q-p+1 , y = s-r+1;
   	ll arr[x][y];
   	memset(arr , 0 , sizeof(arr));
   	ll temp =max(1-a , 1-b);
   	for(ll i=max(temp , max(p-a,r-b)) ; i<=min(min(n-a , n-b),min(q-a, s-b)) ; i++){
   		if(a+i<=q && b+i<=s) arr[a+i-p][b+i-r]=1;
   	}
   	temp = max(1-a , b-n);
   	for(ll i=max(temp , p-a) ; i<=min(min(n-a , b-1), min(q-a , b)) ; i++){
   		if(a+i<=q && b-i>=r){
   			if(b-i<=s) arr[a+i-p][b-i-r] = 1;
   		}
   	}
   	for(ll i=0 ; i<x ; i++){
   		for(ll j=0 ; j<y ; j++){
   			if(arr[i][j] == 1) cout<<'#';
   			else cout<<".";
   		}
   		cout<<"\n";
   	}
    return;
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


