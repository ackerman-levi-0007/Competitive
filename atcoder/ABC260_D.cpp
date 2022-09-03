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

    int k, n;
    cin >> n >> k;
    int p[n];
    F0R(i,n) cin >> p[i];
    int ans[n+1] ={0};
    vector<stack<int>> vis;
    F0R(i,n){
    	int x=-1, an=p[i];
    	F0R(j,sz(vis)){
    		if(sz(vis[j]) == 0) continue;
    		if(vis[j].top() >= p[i]){
    			if(x==-1 || vis[j].top() < an){
    				an = vis[j].top();
    				x=j;
    			}
    		}
    	}

    	if(x == -1){
    		vis.pb({});
    		x = sz(vis)-1;
    		vis[x].push(p[i]);
    	}
    	else{
    		vis[x].push(p[i]);
    	}
    	
    	if(sz(vis[x]) == k){
    		while(!vis[x].empty()){
    			int y=vis[x].top();
    			ans[y] = i+1;
    			vis[x].pop();
    		}
    	}
    }
    FOR(i,1,n+1){
    	if(ans[i] == 0) cout<<"-1\n";
    	else{
    		cout<<ans[i]<<"\n";
    	}
    }
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


