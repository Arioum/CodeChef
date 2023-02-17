// Problem link -
// https://www.codechef.com/problems/CMASKS

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x*100 > y*10){
	        cout<<"CLOTH\n";
	    } else if (x*100 < y*10) {
	        cout<<"DISPOSABLE\n";
	    } else {
	        cout<<"CLOTH\n";
	    }
	}
	return 0;
}