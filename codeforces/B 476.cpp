#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
float fun(int x,int bq){
    float s=1;
    for(int i=1;i<=bq;i++){
        s=s*i;
    }
    float r=1;
    for(int i=1;i<=x;i++){
        r=r*i;
    }
    for(int i=1;i<=bq-x;i++) r=r*i;
    float f=s/r;
    return f;
}
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string a,b;
    cin >> a >> b;
    int ap=0,an=0,bp=0,bn=0,bq=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]=='+') ap++;
        else an++;
        if(b[i]=='+') bp++;
        else if(b[i]=='-') bn++;
        else bq++;
    }
    float f=0;
    int x=ap-bp;
    int y=an-bn;
    float l=1;
    for(int i=1;i<=bq;i++) l=l*2;
    if(n==1){
        if(a==b){
            f=1;
            printf("%0.10f",f);
        }
        else if(bq==1){
            f=0.5;
            printf("%0.10f",f);
        }
        else printf("%0.10f",f);
        return 0;
    }
    if(x<0 || y<0){
        printf("%0.10f",f);
        return 0;
    }
    if(bq==0 && (x==0 && y==0)){
        f=1;
        printf("%0.10f",f);
        return 0;
    }
    if(bq==n){
        if(bq==ap || bq==an){
            f=1/l;
            printf("%0.10f",f);
            return 0;
        }
    }
    x=max(x,y);
    f=fun(x,bq);
    
    f=f/l;
    printf("%0.10f",f);
    return 0;
}