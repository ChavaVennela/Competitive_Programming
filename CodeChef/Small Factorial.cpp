#include <iostream>
using namespace std;
 
int main() {
    int t, i, a, fact;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>a;
        fact = 1;
        while(a>1){
            fact = fact * a;
            a = a - 1;
        }
        cout<<fact<<endl;
    }
	// your code goes here
	return 0;
}
