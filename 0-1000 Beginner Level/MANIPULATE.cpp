// Problem link -
// https://www.codechef.com/problems/MANIPULATE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x>=y)
	    {
	        cout<<"YES\n";
	    } else if (x<y) {
	        cout<<"NO\n";
	    }
	}
	return 0;
}