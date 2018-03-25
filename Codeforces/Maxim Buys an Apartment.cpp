#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, k;
	cin>>n>>k;
	if(n == 1 || k == 0 || k == n){
		cout<<0<<" "<<0<<endl;
	}
	else{
		cout<<1<<" ";
		if(k<n/2){
			if(2*k <= n-k){
				cout<<2*k<<endl;
			}
			else{
				cout<<n-k<<endl;
			}
		}
		else{
			cout<<n-k<<endl;
		}
	}
	return 0;
}
