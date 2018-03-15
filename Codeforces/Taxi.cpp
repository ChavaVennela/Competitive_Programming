#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, p, count = 0, count1 = 0, count2 = 0, count3 = 0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>p;
		if(p == 4){
			count = count + 1;
		}
		else if(p == 3){
			count1 = count1 + 1;
		}
		else if(count1 != 0 && p == 1){
			count = count + 1;
			count1 = count1 -1;
		}
		else if(count2 != 0 && p == 1){
			count1 = count1 + 1;
			count2 = count2 - 1;
		}
		else if(p == 2){
			count2 = count2 + 1;
		}
		else if(p == 1 && count1 == 0 && count2 == 0){
			count3 = count3  + 1;
		}
	}
	while(true){
		if(count3 != 0 && count1 != 0){
		    if(count1 > count3){
			    count = count + count1;
			    count3 = 0;
			    count1 = 0;
		    }
		    else{
			    count = count + count1; 
			    count3 = count3 - count1;
			    count1 = 0;
		    }
	    }
	    if(count3 != 0 && count2 != 0){
	    	if(count2 >= count3){
	    		count1 = count1 + count3;
	    		count2 = count2 - count3;
	    		count3 = 0;
			}
			else{
				count1 = count1 + count2;
				count3 = count3 - count2;
				count2 = 0;
			}
		}
		if(count3 == 0 && count1 != 0){
			count = count + count1;
			count1 = 0;
		}
		if(count3 == 0 && count2 != 0){
			count = count + ((count2 + 1)/2);
			count2 = 0;
		}
		if(count3 != 0 && count2 == 0 && count1 == 0){
			count = count + (count3/4);
			if(count3 % 4 != 0){
				count = count + 1;
			}
			count3 = 0;
		}
		if(count3 == 0 && count2 == 0 && count1 == 0){
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}
