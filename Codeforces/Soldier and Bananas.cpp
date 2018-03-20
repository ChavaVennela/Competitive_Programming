#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int k, n, w, count;
	cin>>k>>n>>w;
	count = k*(w*(w+1))/2;
	if(count-n < 0){
		cout<<0<<endl;
	}
	else{
		cout<<count-n<<endl;
	}
	return 0;
}
