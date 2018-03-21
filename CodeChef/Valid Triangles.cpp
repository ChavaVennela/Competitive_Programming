#include <iostream>
using namespace std;
 
int main() {
    int t, i;
    cin>>t;
    for(i=0; i<t; i++){
        int n1, n2, n3;
        cin>>n1 >>n2 >>n3;
        if(n1 !=0 && n2 !=0 && n3 !=0){
            if(n1+n2+n3 == 180){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
