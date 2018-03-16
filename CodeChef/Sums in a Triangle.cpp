#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int n, j, k, p;
          cin>>n;
          long long int a[n][n];
          for(j=0; j<n; j++){
               for(k=0; k<=j; k++){
                    cin>>a[j][k];
               }
          }
          for(j = n-1; j>0; j--){
               for(k=j; k>0; k--){
                    if(a[j][k] > a[j][k-1]){
                         a[j-1][k-1] = a[j-1][k-1] + a[j][k];
                    }
                    else{
                         a[j-1][k-1] = a[j-1][k-1] + a[j][k-1];
                    }
               }
          }
          cout<<a[0][0]<<endl;
     }
	// your code goes here
	return 0;
}
