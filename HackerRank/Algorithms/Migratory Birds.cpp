#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n, i, p, max = 0;
    cin>>n;
    long long int a[6]={};
    for(i=0; i<n; i++){
        cin>>p;
        a[p] = a[p] + 1;
    }
    max = 1;
    for(i=2; i<=5; i++){
        if(a[i] > a[max]){
            max = i;
        }
    }
    cout<<max<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

