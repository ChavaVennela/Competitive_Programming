#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, i, j, sum = 0;
	cin>>n>>m;
	long long int a[n][m];
	for(i=0; i<n; i++){
		long long int count =0, count1 = 0;
		for(j=0; j<m; j++){
			cin>>a[i][j];
			if(a[i][j] == 0){
				count = count + 1;
			}
			else if(a[i][j] == 1){
				count1 = count1 + 1;
			}
		}
		if(count > 1){
			sum = sum + (pow(2, count)-1-count);
		}
		if(count1 > 1){
			sum = sum + (pow(2, count1)-1-count1);
		}
	}
	for(j=0; j<m; j++){
		long long int count = 0, count1 = 0;
		for(i=0; i<n; i++){
			if(a[i][j] == 0){
				count = count + 1;
			}
			else{
				count1 = count1 + 1;
			}
		}
		if(count > 1){
			sum = sum + (pow(2, count)-1-count);
		}
		if(count1 > 1){
			sum = sum + (pow(2, count1)-1-count1);
		}
	}
	sum = sum + (n*m);
	cout<<sum<<endl;
	return 0;
}
