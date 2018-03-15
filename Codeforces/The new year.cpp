#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int b, sum = 0, count;
	vector<int>a;
	for(int i =0; i<3; i++){
		cin>>b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	sum = a[2] - a[0];
	cout<<sum<<endl;
	return 0;
}
