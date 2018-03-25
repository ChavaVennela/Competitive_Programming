#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int l;
          cin>>l;
          if(l <=3){
               cout<<0<<endl;
          }
          else{
               if(l % 2 != 0){
                    l = l - 1;
               }
               long long int k, p;
               k = (l - 4)/2;
               p = (k+1)*(k+2)/2;
               cout<<p<<endl;
          }
     }
	// your code goes here
	return 0;
}
 
