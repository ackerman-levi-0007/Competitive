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
    std::vector<int> arr1(n) , arr2(n);
    int sum1 = 0 , sum2 = 0;
    FOR(i,0,n){ cin >> arr1[i]; sum1 += arr1[i];}
    FOR(i,0,n){ cin >> arr2[i]; sum2 += arr2[i];}
    if(sum1 != sum2) cout << "-1\n";
    else{
    	queue<int> q1 , q2;
    	FOR(i,0,n){
    		if(arr1[i] > arr2[i]) q1.push(i);
    		else if(arr1[i] < arr2[i]) q2.push(i);
    	}
    	vector<pii> ans;
    	while(!q1.empty()){
    		int x = q1.front() , y = q2.front();
    		ans.pb({x+1 , y+1});
    		arr1[x]--;
    		arr1[y]++;
    		if(arr1[x] == arr2[x]) q1.pop();
    		if(arr1[y] == arr2[y]) q2.pop();
    	}
    	cout << sz(ans) << "\n";
    	FOR(i,0,sz(ans)){
    		cout << ans[i].ff << " " << ans[i].ss <<"\n";
    	}
    }
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


