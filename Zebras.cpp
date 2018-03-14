#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long int i, count=0, count1 = 0, count2 = 0;
	cin>>s;
	long long int a[2]={};
	for(i=0; i<s.size(); i++){
		if(s[i] == '0'){
			a[0] = a[0] + 1;
		}
		else{
			a[1] = a[1] + 1;
		}
	}
	if(a[0] <= a[1]){
		cout<<-1<<endl;
	}
	else{
		count = (a[0]-a[1]-1)+1;
		cout<<count<<endl;
		for(i=0; i<s.size(); i++){
			if(s[i] == '0'){
				cout<<1<<" "<<i+1<<endl;
				count1 = count1 + 1;
			}
			if(count1 == count -1){
				count2 = i;
				break;
			}
		}
		cout<<(2*a[1])+1<<" ";
		count1 = 0;
		for(i=0; i<s.size(); i++){
			if(s[i] == '1'){
				cout<<i+1<<" ";
				count1 = count1 + 1;
			}
			else if(s[i] == '0' && i> count2){
				cout<<i+1<<" ";
				count1 = count1 + 1;
			}
			if(count1 == (2*a[1])+1){
				break;
			}
    	}
	}
	return 0;
}
