#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int t, i;
    cin>>t;
    for(i=0; i<t; i++){
        long long int n;
        cin>>n;
        if(n < 38){
            cout<<n<<endl;
        }
        else if(n<=40){
            cout<<40<<endl;
        }
        else{
            if(((n/5)+1)*5 - n < 3){
                cout<<((n/5)+1)*5<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
