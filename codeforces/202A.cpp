#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n=s.size();
	int arr[26];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++){
		arr[s[i]-'a']++;
	}
	for(int i=25 ; i>=0 ; i--){
		if(arr[i]!=0){
			char ch = i + 'a';
			while(arr[i]>0){
				cout << ch;
				arr[i]--;
			}
			break;
		}
	}
	cout<<"\n";
	return 0;
}