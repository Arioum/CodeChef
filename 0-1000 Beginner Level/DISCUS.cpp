// Problem link -
// https://www.codechef.com/problems/DISCUS

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a>=b && a>=c) {
	        cout<<a<<endl;
	    } else if(b>=a && b>=c) {
	        cout<<b<<endl;
	    } else if(c>=a && c>=b){
	        cout<<c<<endl;
	    }
	}
	return 0;
}
