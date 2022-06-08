#include<bits/stdc++.h> 
using namespace std;
#define ll long long
#define at auto
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

    map<string , vector<int>  > mpptr;
    string str;
    char ch;

    ll answer = 0 , c  = 0 , na = 0 , nb = 0, subs = 0;

    for(int i = 0; i < n; i++){
        cin >> str;
        
        ch = str[0] - 'a' ;
        str.erase(str.begin() + 0);

        if(mpptr.find(str) != mpptr.end()){
            
            mpptr[str][ch] = 1;

        }else{
            vector<int> v(26 , 0);
            v[ch] = 1;
            mpptr[str] = v;
         }

    }
    
    for(at i = mpptr.begin() ; i != mpptr.end() ; i++){

        na = 0;
        for(int z = 0 ; z < 26 ; z++){
            if(i->second[z] == 1)
            na++;
        }
   
        at j = i;
        for(j++  ; j != mpptr.end() ; j++ ){

            c = 0;
            nb = 0;
            for(int z = 0; z < 26 ; z++){
                if(i->second[z] == 1 &&  j->second[z] == 1)
                c++;
            }
            
            for(int z =0; z < 26 ; z++){
                if(j->second[z] == 1)
                nb++;
            }
            answer = answer + (na - c) * (nb - c);
        }
    }
    cout << answer*2 << "\n";
    }
    return 0;
}
