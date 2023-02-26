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

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down


void solve() {

    ll n; cin >> n;
    string s; cin >> s;
    map<pair<ll,ll>,ll> m;
    ll u=0, l=0;
    m[{0,0}]++;
    for(ll i=0 ; i<n ; i++){
    	if(s[i] == 'L') l--;
    	else if(s[i] == 'R') l++;
    	else if(s[i] == 'U') u++;
    	else if(s[i] == 'D') u--;
    	if(m[{u,l}] == 1){
    		cout << "Yes\n";
    		return;
    	}
    	else{
    		m[{u,l}]++;
    	}
    }
    cout << "No\n";
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

