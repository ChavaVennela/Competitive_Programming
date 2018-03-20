#include <iostream>
using namespace std;
 
int main() {
    int t, i, a, rev;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>a;
        rev = 0;
        while(a != 0){
            rev = (rev * 10) + (a%10);
            a = a / 10;
        }
        cout<<rev<<endl;
    }
	// your code goes here
	return 0;
}
