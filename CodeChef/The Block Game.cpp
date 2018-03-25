#include <iostream>
using namespace std;
 
int main() {
    int t, i, n;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        int a, j = 0;
        a  = n;
        while(a != 0){
            j = (j*10) + (a%10);
            a = a / 10;
        }
        if(n == j){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"losses"<<endl;
        }
    }
	// your code goes here
	return 0;
}
