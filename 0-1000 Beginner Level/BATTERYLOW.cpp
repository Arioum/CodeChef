// Problem link -
// https://www.codechef.com/problems/BATTERYLOW

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    if(x<=15)
	    {
	        cout<<"YES\n";
	    } else {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
