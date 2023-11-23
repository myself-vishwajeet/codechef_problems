#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int arr2[n];
	    int result=0;
	    for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	        result=result^arr[i];
	       
	    }
	    int min_xor=result;
	    for(int i=0;i<n;i++)
	    {
	        int xor_after_removal=result^arr[i];
	        min_xor=min(min_xor,xor_after_removal);
	        
	    }
	    cout<<min_xor<<endl;
	}
	return 0;
}