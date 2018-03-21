#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n, i, p, count = 0;
    cin>>n;
    vector<int>a;
    for(i=0; i<n; i++){
        cin>>p;
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    for(i=n-1; i>=0; i--){
        if(a[i] == a[n-1]){
            count = count + 1;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
