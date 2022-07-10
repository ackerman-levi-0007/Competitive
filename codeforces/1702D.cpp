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

    string s;
    cin >> s;
    ll p;
    cin >> p;
    ll arr[27] = {0};
    ll ans = 0;
    for(ll i=0 ; i<s.size() ; i++){
    	ll x = s[i]-'a';
    	x++;
    	ans += x;
    	arr[x]++;
    }
    if(ans <= p){
    	cout << s <<"\n";
    	return;
    }
    R0F(i,27){
    	while(arr[i] != 0 && ans > p){
    		ans = ans-i;
    		arr[i]--;
    	}
    }
    string result="";
    for(ll i=0 ; i<s.size() ; i++){
    	int x = s[i]-'a';
    	x++;
    	if(arr[x] > 0){
    		result += s[i];
    		arr[x]--;
    	}
    }
    cout<<result<<"\n";
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


