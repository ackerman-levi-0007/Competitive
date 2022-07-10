#include<bits/stdc++.h>
using namespace std;
     
int main(){
    int n, s;
    cin >> n >> s;
    vector<vector<int>> v;
    for(int i=0 ; i<n ; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int time = 0, k = s;
    for(int i=v.size()-1 ; i>=0 ; i--){
        time += k - v[i][0];
        if(v[i][1] > time) time += v[i][1] - time;
        k = v[i][0];
    }
    time += k;
    cout << time << "\n";
    return 0;
}