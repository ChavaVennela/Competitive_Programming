#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, t, i = 1;
	cin>>n>>m>>t;
	long long int count = 1, a = n, count1 = 1, b = (n+m);
	while(i <= n-4){
		count = count * a;
		a = a - 1;
		i = i + 1;
	}
	if(n -4 != 0){
		count = count / (n-4);
	}
	if(t > 5){
		i=1;
		while(i <= (n+m-10-t)){
			count1 = count1 * b;
			b = b - 1;
			i = i + 1;
		}
		if((n+m-5-t) != 0){
			count1 = count1 /(n+m-5-t);
		}
	}
	cout<<count*m*count1<<endl;
	return 0;
}
