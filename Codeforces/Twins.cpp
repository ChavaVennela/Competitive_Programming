#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, p, sum = 0, sum1 = 0, count = 0;
	cin>>n;
	vector<int>a;
	for(i=0; i<n; i++){
		cin>>p;
		a.push_back(p);
		sum = sum + p;
	}
	sort(a.begin(), a.end());
	i = n-1;
	while(sum>=sum1){
		sum = sum - a[i];
		sum1 = sum1 + a[i];
		count = count + 1;
		i = i - 1; 
	}
	cout<<count<<endl;
	return 0;
}
