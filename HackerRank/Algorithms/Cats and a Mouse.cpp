#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int t, i;
    cin>>t;
    for(i=0; i<t; i++){
        long long int a, b, c;
        cin>>a>>b>>c;
        if(c > a && c > b){
            if(a>b){
                cout<<"Cat A"<<endl;
            }
            else if(a < b){
                cout<<"Cat B"<<endl;
            }
            else{
                cout<<"Mouse C"<<endl;
            }
        }
        else if((c > a && c < b) || (c<a && c>b)){
            if(abs(c-a) == abs(b - c)){
                cout<<"Mouse C"<<endl;
            }
            else if(abs(c-a) < abs(b-c)){
                cout<<"Cat A"<<endl;
            }
            else{
                cout<<"Cat B"<<endl;
            }
        }
        else if(c<a && c<b){
           if(a<b){
                cout<<"Cat A"<<endl;
            }
            else if(a > b){
                cout<<"Cat B"<<endl;
            }
            else{
                cout<<"Mouse C"<<endl;
            } 
        }
        else if(a == c && b != c){
            cout<<"Cat A"<<endl;
        }
        else if(b == c && a != c){
            cout<<"Cat B"<<endl;
        }
        else if(b == c && a == c){
            cout<<"Mouse C"<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
