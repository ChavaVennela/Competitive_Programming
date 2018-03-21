#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, p, count = 0, count1 = 0;
	cin>>n;
	vector<long long int>a;
	for(i=0; i<n; i++){
		cin>>p;
		a.push_back(p);
	}
	sort(a.begin(), a.end());
	for(i=0; i<n; i++){
		if(a[i] < 0){
			count = count + a[i];
		}
		else{
			count1 = count1 + a[i];
		}
	}
	cout<<abs(count1-count)<<endl;
	return 0;
}
