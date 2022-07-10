#include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        long long int n,mia,mxa,mib,mxb,mic,mxc,sa,sb;
        cin>>n>>mia>>mxa>>mib>>mxb>>mic>>mxc;
        sa=mia+mib+mic;
        sb=mxa+mxb+mxc;
        if(n==sa) cout<<mia<<" "<<mib<<" "<<mic;
        else if(n==sb) cout<<mxa<<" "<<mxb<<" "<<mxc;
        else if(n<=(mxa+mib+mic)) cout<<n-mib-mic<<" "<<mib<<" "<<mic;
        else if(n<=(mxa+mxb+mic)) cout<<mxa<<" "<<n-mxa-mic<<" "<<mic;
        else cout<<mxa<<" "<<mxb<<" "<<n-mxa-mxb;
        return 0;
    }