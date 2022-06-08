#include<bits/stdc++.h>
    using namespace std;
    void num(int n){
        if(n>10) n=n%10;
        if(n==1) cout<< "one";
        if(n==2) cout<< "two";
        if(n==3) cout<< "three";
        if(n==4) cout<< "four";
        if(n==5) cout<< "five";
        if(n==6) cout<< "six";
        if(n==7) cout<< "seven";
        if(n==8) cout<< "eight";
        if(n==9) cout<< "nine";
    }
     
    int main(){
        int x,n;
        cin>>x;
        if(x==0) cout<<"zero";
        else if(x<10) num(x);
        else if(x==10) cout<<"ten";
        else if(x==11) cout<<"eleven";
        else if(x==12) cout<<"twelve";
        else if(x==13) cout<<"thirteen";
        else if(x==14) cout<<"fourteen";
        else if(x==15) cout<<"fifteen";
        else if(x==16) cout<<"sixteen";
        else if(x==17) cout<<"seventeen";
        else if(x==18) cout<<"eighteen";
        else if(x==19) cout<<"nineteen";
        else if(x==20) cout<<"twenty";
        else if(x<30){
            cout<<"twenty-";
            num(x);
        }
        else if(x==30) cout<<"thirty";
        else if(x<40){
            cout<<"thirty-";
            num(x);
        }
        else if(x==40) cout<<"forty";
        else if(x<50){
            cout<<"forty-";
            num(x);
        }
        else if(x==50) cout<<"fifty";
        else if(x<60){
             cout<<"fifty-";
             num(x);
        }
        else if(x==60) cout<<"sixty";
        else if(x<70){
             cout<<"sixty-";
             num(x);
        }
        else if(x==70) cout<<"seventy";
        else if(x<80){
             cout<<"seventy-";
             num(x);
        }
        else if(x==80) cout<<"eighty";
        else if(x<90){
             cout<<"eighty-";
             num(x);
        }
        else if(x==90) cout<<"ninety";
        else{
             cout<<"ninety-";
             num(x);
        }
        return 0;
    }