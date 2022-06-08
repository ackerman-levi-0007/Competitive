#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fun(string s,string d){
	int k=s[0]-'0';
    int l=s[1]-'0';
    k=(k*10)+l;

    if(d[0]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            s[0]='0';
            s[1]='0';
            k=0;
        }
    }
    else{
        if(s[0]=='1' && s[1]=='2') k=12;
        else k=k+12;
    }
    
    int m=s[3]-'0';
    int n=s[4]-'0';
    m=(m*10)+n;
    k=(k*100)+m;
    return k;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        string d;
        cin>>s>>d>>n;
        int x=fun(s,d);
        int h,k;
        while(n--){
            string q;
            string w;
            cin>>q>>w;
            h=fun(q,w);
            
            q.clear();
            w.clear();
            cin>>q>>w;
            k=fun(q,w);

            if(x>=h && x<=k) cout<<"1";
            else cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}