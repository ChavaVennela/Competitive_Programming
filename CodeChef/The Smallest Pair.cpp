#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          long long int n, j, m, sum =0;
          std::vector<int>a;
          cin>>n;
          for(j=0; j<n; j++){
               cin>>m;
               a.push_back(m);
          }
          sort(a.begin(), a.end());
          sum = a[0] + a[1];
          cout<<sum<<endl;
     }
	// your code goes here
	return 0;
}
 
