#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    if(s[s.size()-2] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0';
            s[1] = '0';
        }
        for(int j =0; j<s.size()-2; j++){
            cout<<s[j];
        }
    }
    else{
        long long  int t, u, i, n;
        u = int(s[1]) -48;
        t= int(s[0]) - 48;
        i = (t*10) + u;
        n = i + 12;
        if(i == 12){
            cout<<12;
        }
        else{
            cout<<n;
        }
        for(int j =2; j<s.size()-2; j++){
            cout<<s[j];
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
