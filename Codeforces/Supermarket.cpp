#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, k, i;
	double p, a, b;
	cin>>n>>k;
	vector<double>c;
	for(i=0; i<n; i++){
		cin>>a>>b;
		p =a/b;
		c.push_back(p); 
	}
	sort(c.begin(), c.end());
	cout<<fixed<<setprecision(8)<<c[0]*k<<endl;
	return 0;
}
