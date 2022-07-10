#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,m,c=0;
    cin >> n >> m;
    char s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> s;
            if(s=='-') cout<< "-";
            else{
                if(i%2==0){
                    if(j%2==0) cout<<"W";
                    else cout <<"B";
                }
                else{
                    if(j%2==0) cout<<"B";
                    else cout <<"W";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}