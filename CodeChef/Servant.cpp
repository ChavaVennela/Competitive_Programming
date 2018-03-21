#include <iostream>
using namespace std;
 
int main() {
    int t, n, i;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        if(n < 10){
            cout<<"What an obedient servant you are!"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
	// your code goes here
	return 0;
} 
