#include <bits/stdc++.h>
using namespace std;
int sum(int n){
	int count = 0;
	while(n != 0){
		count = count + (n%10);
		n = n/10;
	}
	return count;
}

int main(){
	long long int n, count = 1, a = 19;
	cin>>n;
	while(count != n){
		a = a + 9;
		while(sum(a) != 10){
			a = a + 9;
		}
		count = count + 1;
	}
	cout<<a<<endl;
}
