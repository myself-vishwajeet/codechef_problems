#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r,count=0;
	    cin>>l>>r;
	    for(int i=2*l;i<=2*r;i++)
	    {
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}