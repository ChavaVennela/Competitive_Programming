#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i, n;
     cin>>t;
     std::vector<int> a;
     for(i=0; i<t; i++){
          cin>>n;
          a.push_back(n);
     }
     sort(a.begin(), a.end());
     for(i=0; i<t; i++){
          cout<<a[i]<<endl;
     }
	// your code goes here
	return 0;
}