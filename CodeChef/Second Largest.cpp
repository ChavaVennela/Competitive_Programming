#include <iostream>
using namespace std;
 
int main() {
    int t, i, a, b, c;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>a>>b>>c;
        if(b>c){
            if(b>a && a>c){
                cout<<a<<endl;
            }
            else if(a<c){
                cout<<c<<endl;
            }
            else if(a>b){
                cout<<b<<endl;
            }
        }
        else{
            if(b>a){
                cout<<b<<endl;
            }
            else if(a>c){
                cout<<c<<endl;
            }
            else if(a>b && a<c){
                cout<<a<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}
