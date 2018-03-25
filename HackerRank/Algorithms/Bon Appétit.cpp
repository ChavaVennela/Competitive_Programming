#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n, k, i, p, count = 0, cos;
    cin>>n>>k;
    vector<int>a;
    for(i=0; i<n; i++){
        cin>>p;
        a.push_back(p);
        if(i != k){
            count = count + p;
        }
    }
    cin>>cos;
    if(count / 2 == cos){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<cos-(count/2)<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

