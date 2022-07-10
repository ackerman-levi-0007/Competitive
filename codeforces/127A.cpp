#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	double s=0, a=0 , b=0;
	cin >> a >> b;
	for(int i=1 ; i<n ; i++){
		float x, y;
		cin >> x >> y;
		float sum=(a-x)*(a-x) + (b-y)*(b-y);
		sum=sqrt(sum);
		s = s + sum;
		a=x;
		b=y;
	}
	s=s*k;
	printf("%0.6lf",s/50);
	return 0;
}