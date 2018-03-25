#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int i, count = 0;
	for(i=0; i<s.size(); i++){
		if(s[i] == '4' || s[i] == '7'){
			count = count + 1;
		}
	}
	if(count < 4){
		cout<<"NO"<<endl;
	}
	else{
		long long int count1 = 0;
		while(count != 0){
			if(count % 10 != 4 && count % 10 != 7){
				count1 = 1;
				break;
			}
			count = count / 10;
		}
		if(count1 == 1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
