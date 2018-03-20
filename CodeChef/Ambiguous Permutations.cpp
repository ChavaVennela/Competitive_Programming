#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     do{
          long long int a[t], count = 0;
          for(i=1; i<=t; i++){
               cin>>a[i];
          }
          long long int b[t];
          for(i=1; i<=t; i++){
               b[a[i]] = i;
          }
          for(i=1; i<=t; i++){
               if(a[i] != b[i]){
                    count = 1;
                    break;
               }
          }
          if(count == 1){
               cout<<"not ambiguous"<<endl;
          }
          else{
               cout<<"ambiguous"<<endl;
          }
          cin>>t;
     }while(t != 0);
	// your code goes here
	return 0;
}
