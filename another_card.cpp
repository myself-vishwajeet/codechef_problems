#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float c,r;
	    cin>>c>>r;
	    float  cc=ceil(1.0*c/9);float rr=ceil(1.0*r/9);
	    if(cc>=rr)cout<<1<<' '<<rr<<endl;
	    else cout<<0<<' '<<cc<<endl;
	    
	   
	}
	return 0;
}
