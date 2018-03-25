#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, p, i, j, count = 0;
	cin>>n>>p;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i*j == p){
				count = count + 1;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
