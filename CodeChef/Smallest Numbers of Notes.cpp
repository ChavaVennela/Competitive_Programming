#include <iostream>
using namespace std;
 
int main() {
    int t, i, n;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        int a;
        if(n%100 == 0){
            a= n/100;
        }
        else{
            a = n/100;
            n = n % 100;
            if(n % 50 == 0){
                a = a + (n/50);
            }
            else{
                a = a + (n/50);
                n = n % 50;
                if(n% 10 == 0){
                    a = a+ (n/10);
                }
                else{
                    a = a+ (n/10);
                    n = n%10;
                    if(n%5 == 0){
                        a = a+ (n/5);
                    }
                    else{
                        a = a + (n/5);
                        n = n%5;
                        if(n%2==0){
                            a = a+ (n/2);
                        }
                        else{
                            a = a +(n/2) + 1;
                        }
                    }
                }
            }
        }
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
 

