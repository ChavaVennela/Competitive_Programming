#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n, k, count = 0, i, j;
    cin>>n>>k;
    long long int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if((a[i]+a[j]) % k == 0){
                count = count + 1;
            }
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
