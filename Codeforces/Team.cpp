#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, j, count = 0, count1 = 0, m;
	cin>>n;
	for(i=0; i<n; i++){
		count = 0;
		for(j=0; j<3; j++){
			cin>>m;
			if(m == 1){
				count= count + 1;
			}
		}
		if(count >= 2){
			count1 = count1 + 1;
		}
	}
	cout<<count1<<endl;
	return 0;
}
