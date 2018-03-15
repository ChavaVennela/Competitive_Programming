#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, count = 0;
	cin>>n;
	long long int a[n], count1 = 0, j;
	for(i=0; i<n; i++){
		count1 = 0;
		count = 0;
		cin>>a[i];
		for(j=1; j<=a[i]; j++){
			if(a[i]%j == 0){
				count = count + 1;
			}
			if(count > 3){
				count1 = 1;
				break;
			}
		}
		if(count1 == 0 && count == 3){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
