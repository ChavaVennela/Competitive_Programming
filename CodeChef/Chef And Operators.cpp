#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t; 
     for(i=0; i<t; i++){
          long long int n, m;
          cin>>n>>m;
          if(n > m){
               cout<<">"<<endl;
          }
          else if(n<m){
               cout<<"<"<<endl;
          }
          else{
               cout<<"="<<endl;
          }
     }
	// your code goes here
	return 0;
}
