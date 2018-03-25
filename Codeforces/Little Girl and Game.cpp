#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long int a[26]={}, i, count = 0, count1 = 0;
	cin>>s;
	for(i=0; i<s.size(); i++){
		a[s[i]-97] = a[s[i]-97] + 1;
	}
	for(i=0; i<26; i++){
		if(a[i]>0 && a[i]%2 == 0){
			count = count + a[i]/2;
		}
		else if(a[i]>0 && a[i]%2 != 0){
			count1 = count1 + 1;
			count = count + (a[i]-1)/2;
		}
	}
	if(count1 > 1){
		if(count % 2 == 0){
		    if((count+count1)% 2 == 0){
			    cout<<"Second"<<endl;
		    }
		    else{
			    cout<<"First"<<endl;
		    }	
		}
		else{
			if((count+count1)% 2 == 0){
			    cout<<"First"<<endl;
		    }
		    else{
			    cout<<"Second"<<endl;
		    }
		}
	}
	else{
		cout<<"First"<<endl;
	}
	return 0;
}
