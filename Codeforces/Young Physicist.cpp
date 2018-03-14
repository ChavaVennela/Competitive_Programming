#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, p, q, r, count =0, count1 = 0, count2 = 0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>p>>q>>r;
		count = count + p;
		count1 = count1 + q;
		count2 = count2 + r;
	}
	if(count == 0 && count1 == 0 && count2 == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
