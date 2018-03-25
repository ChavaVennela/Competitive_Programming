#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int s, t, a, b, m, n, i, count =0, count1 = 0;
    cin>>s>>t>>a>>b>>m>>n;
    long long int orange[n], apple[m];
    for(i=0; i<m; i++){
        cin>>apple[i];
        if(apple[i] > 0 && (a+apple[i] >= s && a+apple[i] <= t)){
            count = count + 1;
        }
    }
    for(i=0; i<n; i++){
        cin>>orange[i];
        if(orange[i] <= 0){
            if(b+orange[i] >= s && b+orange[i] <= t)
            count1 = count1 + 1;
        }
    }
    cout<<count<<endl;
    cout<<count1<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

