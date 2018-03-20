#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t, i, count = 0;
	string s;
	cin>>t>>s;
	for(i=1; i<t; i++){
		if(s[i] == s[i-1]){
			count = count + 1;
		}
	}
	cout<<count<<endl;
	return 0;
}
