// Problem link -
// https://www.codechef.com/problems/CCHOCOLATES

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    cout<<((x*5)+(y*10))/z<<"\n";
	}
	return 0;
}
