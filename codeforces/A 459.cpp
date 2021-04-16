#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1-x2==0){
    	x3=x1+abs(y2-y1);
    	x4=x3;
    	y3=y1;
    	y4=y2;
    }
    else if(y1-y2==0){
    	x3=x1;
    	x4=x2;
    	y3=y1+abs(x2-x1);
    	y4=y3;
    }
    else if(y1-y2 == x1-x2 || y1-y2==x2-x1){
    	x3=x1;
    	y3=y2;
    	x4=x2;
    	y4=y1;
    }
    else{
    	cout<<"-1";
    	return 0;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    return 0;
}