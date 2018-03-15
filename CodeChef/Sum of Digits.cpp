#include <iostream>
using namespace std;
 
int main() {
    int t, i, a, sum;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>a;
        sum = 0;
        while(a != 0){
            sum = sum + (a%10);
            a = a / 10;
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}