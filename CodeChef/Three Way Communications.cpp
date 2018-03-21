#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int n, j, a[6], count = 0;
          double k;
          cin>>n;
          for(j =0; j<6; j++){
               cin>>a[j];
          }
          for(j =0; j<3; j+=2){
               k = pow(pow(a[j]-a[j + 2], 2)+pow(a[j+ 1]-a[j+ 3], 2), 0.5);
               if(k >n){
                    count = count + 1;
               }
          }
          k = pow(pow(a[0]-a[4],2)+pow(a[1]-a[5],2),0.5);
          if(k > n){
               count = count + 1;
          }
          if(count >= 2){
               cout<<"no"<<endl;
          }
          else{
               cout<<"yes"<<endl;
          }
     }
	// your code goes here
	return 0;
}
