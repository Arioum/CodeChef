// Problem link -
// https://www.codechef.com/problems/HOTCOLD

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int c;
        cin>>c;
        
        if(c>20) {
            cout<<"HOT\n";
        } else {
            cout<<"COLD\n";
        }
    }
	return 0;
}
