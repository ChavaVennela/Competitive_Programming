#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int n, j;
          cin>>n;
          if(n == 1 || n == 2){
               cout<<n<<endl;
          }
          else{
               j = (n/2) + 1;
               cout<<j<<endl;
          }
     }
	// your code goes here
	return 0;
}