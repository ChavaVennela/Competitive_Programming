#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int j;
	for(j=0; j<s.size(); j++){
		if(s[j]>=65 && s[j]<=90){
			if(s[j] != 'A'&& s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U' && s[j] != 'Y'){
				cout<<"."<<char(int(s[j])+32);
			}
		}
		else if(s[j] != 'a'&& s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u'&& s[j] != 'y'){
			cout<<"."<<s[j];
		}
	}
	return 0;
}
