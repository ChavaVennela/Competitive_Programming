#include <iostream>
using namespace std;
 
int main() {
    int t, i;
    char a;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>a;
        if(a == 'c' || a == 'C'){
            cout<<"Cruiser"<<endl;
        }
        else if(a == 'D' || a == 'd'){
            cout<<"Destroyer"<<endl;
        }
        else if(a == 'b' || a == 'B'){
            cout<<"BattleShip"<<endl;
        }
        else if(a == 'f' || a == 'F'){
            cout<<"Frigate"<<endl;
        }
    }
	// your code goes here
	return 0;
}
