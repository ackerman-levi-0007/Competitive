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

    ll n, k , sum = 0; cin >> n >> k;
    ll arr[n];
    vector<bool> vis(n, false);
    queue<pair<ll , ll >> q;
    for(ll i=0 ; i<n ; i++){
    	cin >> arr[i];
    	if(arr[i]!=0){
    		q.push({i, k});
    		vis[i] = true;
    	}
    }
    
    while(!q.empty()){
    	ll x = q.front().first;
    	ll y = q.front().second;
    	q.pop();
    	sum = sum + arr[x] + (2*y);
		vis[x] = true;
    	if(x+1<n){
    		if(vis[x+1] == false && y-1 >= 0){
    			q.push({x+1,y-1});
    			vis[x+1] = true;
    		}
    	} 
    	if(x-1>=0 && arr[x-1] != -1){
    		if(vis[x-1] == false && y-1 >= 0){
    			q.push({x-1,y-1});
    			vis[x-1] = true;
    		} 
    			
    	}
    	if(x+1==n){
    		if(vis[0] == false && y-1 >= 0) {
    			q.push({0,y-1});
    			vis[0] = true;
    		}
    	}
    	if(x-1==-1){
    		if(vis[n-1] == false && y-1 >= 0){
    			q.push({n-1,y-1});
    			vis[n-1] = true;
    		}
    	}
    }

    cout << sum << "\n";

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // time_t start , end;

    // time(&start);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


