#include<bits/stdc++.h>
using namespace std;
#define ll long long
void alp(char aa,char bb,char cc,char dd){
    if(aa=='0'){
        if(bb=='0'){
            if(cc=='0'){
                if(dd=='0') cout<<"a";
                else cout<<"b";
            }
            else{
                if(dd=='0') cout<<"c";
                else cout<<"d";
            }
        }
        else{
            if(cc=='0'){
                if(dd=='0') cout<<"e";
                else cout<<"f";
            }
            else{
                if(dd=='0') cout<<"g";
                else cout<<"h";
            }
        }
    }
    else{
        if(bb=='0'){
            if(cc=='0'){
                if(dd=='0') cout<<"i";
                else cout<<"j";
            }
            else{
                if(dd=='0') cout<<"k";
                else cout<<"l";
            }
        }
        else{
            if(cc=='0'){
                if(dd=='0') cout<<"m";
                else cout<<"n";
            }
            else{
                if(dd=='0') cout<<"o";
                else cout<<"p";
            }
        }
    }
}
    
int main(){
    ll t;
    cin>>t;
    for(ll z=0;z<t;z++){
        ll n;
        cin>>n;
        string s;
        char w,x,y,zz;
        cin>>s;
        for(ll i=0;i<n;){
            w=s[i];
            x=s[i+1];
            y=s[i+2];
            zz=s[i+3];
            alp(w,x,y,zz);
            i=i+4;
        }
        if(z!=t-1)cout<<"\n";
    }
    return 0;
}