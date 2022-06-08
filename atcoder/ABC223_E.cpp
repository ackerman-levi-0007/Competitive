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
	string x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	int n = x.size() , m = y.size() , i_n1=0 , i_n2=0;
	vector<int> result(n+m , 0);
	for(int i=n-1 ; i>=0 ; i--){
			int carry = 0;
			int n1 = x[i] - '0';
			i_n2 = 0;
			for(int j=m-1 ; j>=0 ; j--){
				int n2 = y[j] - '0';
				int sum = n1*n2 + result[i_n1 + i_n2] + carry;
				carry = sum/10;
				result[i_n1 + i_n2] = sum%10 ;
				i_n2++;
			}
			if(carry>0){
				result[i_n1 + i_n2] += carry;
			}
	}
	int itr = result.size() -1;
	while(itr>=0 && result[itr] == 0) itr--;
	string ans="";
	if(itr == -1) ans ="0";
	else{
		while (itr >= 0)
        ans += std::to_string(result[itr--]);
	}
	string ans_2 = "";
	int i=0 , j=0 , z=0 , carry=0;
	int q=a.size(), w = b.size() , e = c.size();
	while(i<q || j<w || z<e){
		int sum=0;
		if(i<q) sum += a[i]-'0';
		if(j<w) sum += b[j]-'0';
		if(z<e) sum += c[z]-'0';
		sum+=carry;
		carry = sum/10;
		ans_2 += std::to_string(sum%10);
	}
	if(carry > 0){
		ans_2 += std::to_string(carry);
	}
	reverse(ans_2.begin() , ans_2.end());
	if(ans >= ans_2) cout<<"Yes\n";
	else cout <<"No\n";
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


