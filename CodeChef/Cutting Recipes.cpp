#include <iostream>
using namespace std;
int gcd(int a,int b) {
    int temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
int main() {
    int t, i, n, result;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        int j, a[n], min, count =0;
        for(j=0; j<n; j++){
            cin>>a[j];
        }
        result = a[0];
        for(j=1; j<n; j++){
            result = gcd(result, a[j]);
        }
        for(j = 0; j<n; j++){
            cout<<a[j]/result<<" ";
        }
        cout<<"\n";
    }
	// your code goes here
	return 0;
}
 
