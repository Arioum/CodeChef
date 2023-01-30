// Problem link -
// https://www.codechef.com/problems/CHFRICH

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int y=0;
        
        while(a<b)
        {
            a+=x;
            y++;
        }
        
        cout<<y<<endl;
    }
	return 0;
}
