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

    ll a, b;
    cin >> a >> b;
    while(a%10 == 0){
    	a=a/10;
    	b=b+1;
    }
    ll c, d;
    cin >> c >> d;
    while(c%10 == 0){
    	c=c/10;
    	d=d+1;
    }

    if(a==c && b==d) cout << "=\n";
    else{
    	ll n=b, m=d;
    	ll temp = a;
    	while(temp > 0){
    		temp = temp/10;
    		n++;
    	}
    	temp=c;
    	while(temp>0){
    		temp = temp/10;
    		m++;
    	}
    	if(n>m){
    		cout << ">\n";
    	}
    	else if(n<m) cout<<"<\n";
    	else{
    		string s1 = to_string(a);
    		string s2 = to_string(b);
    		ll i=0 , j=0 , z=0;
    		while(i<s1.size() && j<s2.size()){
    			if(s1[i] < s2[j]){
    				z=-1;
    				break;
    			}
    			else if(s1[i] > s2[j]){
    				z=1;
    				break;
    			}
    		}
    		if(z==-1) cout<<"<\n";
    		else if(z==1) cout<<">\n";
    		else{
    			if(i==s1.size()) cout<<"<\n";
    			else cout<<">\n";
    		}
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


