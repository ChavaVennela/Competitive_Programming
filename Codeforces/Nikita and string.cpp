#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int j, p= 0, count =0;
	vector<int>a;
	count = 1;
	while(s[p] != 'a'){
		p = p + 1;
	}
	for(j=p + 1; j<s.size(); j++){
		if(s[j] == s[j-1]){
			count = count + 1;
		}
		else{
			a.push_back(count);
			count = 1;
		}
	}
	a.push_back(count);
	for(j=0; j<a.size(); j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
