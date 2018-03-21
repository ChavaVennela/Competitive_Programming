#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("hello hello");
    int count = 0;
    size_t nPos = s.find("hello", 0); // fist occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("hello", nPos+1);
    }

    cout<<count;
};
b[j] = s.find(a[j]);
		if(b[j] != -1){
			count = count + 1;
		}
		cout<<b[j]<<" ";
