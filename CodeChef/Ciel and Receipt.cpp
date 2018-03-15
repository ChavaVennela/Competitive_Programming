#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int p, j= 0, count = 0;
          cin>>p;
          if(p > pow(2, 11)){
               while(p > pow(2, 11)){
                    p = p-pow(2, 11);
                    count = count + 1;
               }
          }
          while(pow(2, j)<=p && p<=pow(2, 11)){
               if(p == pow(2, j)){
                    count = count + 1;
                    break;
               }
               else{
                    j = j + 1;
                    if(pow(2, j) > p){
                         p = p-pow(2, j-1);
                         count = count + 1;
                         j = 0;
                    }
               }
          }
          cout<<count<<endl;
     }
	// your code goes here
	return 0;
}