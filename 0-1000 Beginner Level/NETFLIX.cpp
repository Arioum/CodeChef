// Problem link -
// https://www.codechef.com/problems/NETFLIX

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    
	    if(a+b>=x || b+c>=x || c+a>=x) {
	        cout<<"YES\n";
	    } else {
            cout<<"NO\n";
        }
	}
	return 0;
}