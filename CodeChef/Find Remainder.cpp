#include <iostream>
using namespace std;
 
int main() {
    int t, i;
    cin>>t;
    for(i=0; i<t; i++){
        int a, b, c;
        cin>>a >>b;
        c = a % b;
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}