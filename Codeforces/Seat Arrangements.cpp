#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, k, i, j, count = 0, count1 = 0;
	cin>>n>>m>>k;
	char a[n][m];
	for(i=0; i<n; i++){
		count = 0;
		for(j=0; j<m; j++){
			cin>>a[i][j];
			if(a[i][j] == '.'){
				count = count + 1;
			}
			else if(a[i][j] == '*'){
				if(count >= k){
					count1 = count1 + 1 + (count-k); 
				}
				count = 0;
			}
		}
		if(count >= k){
			count1 = count1 + 1 + (count-k);
		}
	}
	if(k != 1){
		for(j=0; j<m; j++){
			count = 0;
			for(i=0; i<n; i++){
				if(a[i][j] == '.'){
					count = count + 1;
				}
				else{
					if(count >= k){
						count1 = count1 + 1 + (count-k);
					}
					count = 0;
				}
			}
			if(count >= k){
				count1 = count1 + 1 + (count-k);
			}
		}
	}
	cout<<count1<<endl;
	return 0;
}
