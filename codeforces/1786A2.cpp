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

    ll n;
    cin >> n;
    ll alicew = 0, bobw = 0, aliceb = 0, bobb = 0;
    ll i=1, z=0;
    alicew++;
    n--;
    i++;
    while(n>0){
        ll x = (2*i)+1;
    	if(z%2 == 0){
    		if(n >= x){
    			bobb += (x/2)+1;
                bobw += x/2;
    			n -= x;
    		}
    		else{
                bobb += n/2;
                bobw += n/2;
    			if(n%2 != 0) bobb++;
    			break;
    		}
    	}
    	else{
    		if(n >= x){
    			alicew += (x/2)+1;
                aliceb += (x/2);
    			n -= x;
    		}
    		else{
    			alicew += (n/2);
                aliceb += (n/2);
                if(n%2 != 0) alicew++;
    			break;
    		}
    	}
    	i = i+2;
    	z++;
    }
    cout<< alicew << " " << aliceb << " " << bobw << " " << bobb <<"\n";
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


