#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long int t, i;
     cin>>t;
     for(i=0; i<t; i++){
          string s;
          cin>>s;
          std::stack<char> a;
          long long int j;
          for(j=0; j<s.size(); j++){
               if(s[j] >= 97 && s[j] <= 122){
                    cout<<s[j];
               }
               else if(s[j] == '('){
                    a.push(s[j]);
               }
               else if(s[j] == ')'){
                    while(a.top() != '('){
                         cout<<a.top();
                         a.pop();
                    }
                    a.pop();
               }
               else if(s[j] == '+' || '-'){
                    if(a.top() == '*' || a.top() == '^'){
                         while(a.top() != '('){
                              cout<<a.top();
                              a.pop();
                         }
                    }
                    a.push(s[j]);
               }
               else if(s[j] == '*'){
                    if(a.top() == '^'){
                         while(a.top() != '('){
                              cout<<a.top();
                              a.pop();
                         }
                    }
                    a.push(s[j]);
               }
               else if(s[j] == '^'){
                    a.push(s[j]);
               }
          }
          cout<<endl;
     }
	// your code goes here
	return 0;
}
 

