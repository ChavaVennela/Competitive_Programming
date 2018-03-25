#include <iostream>
using namespace std;
 
int main() {
     long long int t, i, n;
     cin>>t;
     for(i=0; i<t; i++){
          cin>>n;
          long long int j, count =0;
          for(j = 2; j<=(n/2); j++){
               if(n%j == 0){
                    count = 1;
                    break;
               }
          }
          if(count == 1){
               cout<<"no"<<endl;
          }
          else{
               cout<<"yes"<<endl;
          }
     }
	// your code goes here
	return 0;
}
