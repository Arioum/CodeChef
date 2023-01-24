// Problem link -
// https://www.codechef.com/problems/COURSEREG

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    if(m-k-n<=m && m-k-n>=0){
	        cout<<"YES\n";
	    } else {
	        cout<<"NO\n";
	    }
	}
	return 0;
}