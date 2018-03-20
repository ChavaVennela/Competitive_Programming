#include <iostream>
using namespace std;
 
int main() {
    int t, i, n, m;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n>>m;
        if(n > m){
            cout<<n<<endl;
        }
        else{
            cout<<m<<endl;
        }
        cout<<m+n<<endl;
    }
	// your code goes here
	return 0;
}
