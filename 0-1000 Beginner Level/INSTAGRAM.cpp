// Problem link -
// https://www.codechef.com/problems/INSTAGRAM

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x> 10*y)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";    
	    }
	}
	return 0;
}
