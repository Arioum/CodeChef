// Problem link -
// https://www.codechef.com/problems/VOLCONTROL

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int z=x-y;
	    
	    if(z<0)
	    {
	        cout<<-z<<"\n";
	    } else {
	        cout<<z<<"\n";
	    }
	}
	return 0;
}
