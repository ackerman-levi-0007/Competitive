#include<bits/stdc++.h>
using namespace std;

void solve(int n,int c) {

    std::vector<int> array(n , 1);
    for(int i = 0; i < n ; i++) array[i] += i;
    int start = 0 , koi = n-1;

    if(c < n- 1 || c > (n*(n+1))/2  - 1 ){
        cout << "IMPOSSIBLE";
        return;
    }
    c = c - (n -1); 
    for(int i = 0; i < n-1 && c > 0 ; i++){
        if(i % 2 == 1){
            if(c >= koi - start ){
                for(int j = 0 ; j < (koi + 1  - start )/2 ; j++) swap(array[start+j] , array[koi - j]);
                c -= (koi - start );
            }else{
                for(int j = 0 ; j < (c+1)/2 ;j++) swap(array[start+j] , array[start + c - j ]);
                c = 0;
            }
            start++;
        }else{
            if(c >=  koi - start ){
                for(int j = 0 ; j < (koi - start + 1 )/2 ; j++) swap(array[start + j] , array[koi - j]);
                c -= (koi - start)  ;
            }else{
                for(int j = 0 ; j < (c+1)/2 ;j++) swap(array[koi - j] , array[(koi - c) + j ]);
                c = 0;
            }
            koi--;
        }
    } 
    
    for(int i = 0; i < n ; i++){
        cout << array[i] << " ";
    }   
}

int main() {
    int  t;
    cin >> t;
    for(int i=1;i<=t;i++) {
    	int n,c;
    	cin >> n >> c; 
    	cout << "Case #" << i << ": ";
    	solve(n,c);
        cout << "\n";
    }
    return 0;
}