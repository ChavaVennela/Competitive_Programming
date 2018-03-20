#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, i, p, min = 0;
	vector<int>a;
	cin>>n>>m;
	for(i=0; i<m; i++){
		cin>>p;
		a.push_back(p);
	}
	sort(a.begin(), a.end());
	min = a[n-1] - a[0];
	for(i=1; (n+i-1)<m; i++){
		if(a[n+i-1]-a[i] < min){
			min = a[n+i-1] - a[i];
		}
	}
	cout<<min<<endl;
	return 0;
}
