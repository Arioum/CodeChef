// Problem link -
// https://www.codechef.com/problems/READPAGES

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	    while(y)
	    {
	        n-=x;
	        y--;
	    }
	    
	    n<=0 ? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}
