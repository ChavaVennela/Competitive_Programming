#include <iostream>
using namespace std;
 
int main() {
    int t, i, n;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        int a;
        a = n % 10;
        while(n >= 10){
            n = n / 10;
        }
        cout<<a+n<<endl;
    }
	// your code goes here
	return 0;
}
 
