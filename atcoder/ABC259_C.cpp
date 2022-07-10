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

    string a, b;
    cin >> a >> b;
    long long int i=0, j=0;
    while(i<sz(a) && j<sz(b)){
    	if(a[i] == b[j]){
    		if(a[i] == a[i+1] && b[j] == b[j+1]){
    			while(i<sz(a) && a[i] == b[j]){
    				i++;
    			}
    			while(j<sz(b) && b[j] == a[i-1]){
    				j++;
    			}
    		}
    		else if(a[i] != a[i+1] && b[j] != b[j+1]){
    			i++;
    			j++;
    		}
    		else{
    			cout<<"No\n";
    			return;
    		}
    	}
    	else{
    		cout<<"No\n";
    		return;
    	}
    }
    if(i!=sz(a) || j!=sz(b)) cout<<"No\n";
    else cout<<"Yes\n";
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


