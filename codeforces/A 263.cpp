#include<bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
    int a[5][5],x=0,y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    if(x>2) x=x-2;
    else if(x<2) x=2-x;
    else x=0;
    if(y>2) y=y-2;
    else if(y<2) y=2-y;
    else y=0;
    cout<<x+y;
    return 0;
}