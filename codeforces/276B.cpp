#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    int n = s.size();
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        sum=sum+(arr[i]%2);
    }
    if(sum <= 1){
        cout << "First";
    }
    else{
        if(sum%2==0) cout<<"Second";
        else cout<<"First";
    }
    return 0;
}