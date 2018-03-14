#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, count = 0, max = 0;
	cin>>n;
	long long int a[n], b[n];
	for(i=0; i<n; i++){
		cin>>a[i]>>b[i];
		count = count - a[i];
		count = count + b[i];
		if(count > max){
			max = count;
		}
	}
	cout<<max<<endl;
	return 0;
}
