#include <iostream>
using namespace std;
 
int main() {
    int n, i, s1=0, s2=0, p =0, k, a, b;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a>>b;
        s1 = s1 + a;
        s2 = s2 + b;
        if(s1 > s2){
            if(s1-s2 > p){
                p = s1 - s2;
                k = 1;
            }
        }
        else{
            if(s2-s1 > p){
                p = s2 - s1;
                k = 2;
            }
        }
    }
    cout<< k<<" "<<p;
	// your code goes here
	return 0;
}
 