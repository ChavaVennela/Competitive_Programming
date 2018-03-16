#include <iostream>
using namespace std;
 
int main() {
    int t, i, n, count;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        count = 0;
        while(n != 0){
            if(n % 10 == 4){
                count = count + 1;
            }
            n = n / 10;
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
