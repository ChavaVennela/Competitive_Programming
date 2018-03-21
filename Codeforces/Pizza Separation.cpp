#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, count = 360, p, count1=0;
	cin>>n;
	vector<long long int>a;
	for(i=0; i<n; i++){
		cin>>p;
		a.push_back(p);
	}
	for(i=0; i<n; i++){
		count1 = count1 + a[i];
		count = min(count, abs((2*count1)-360));
	}
	cout<<count<<endl;
	return 0;
}
