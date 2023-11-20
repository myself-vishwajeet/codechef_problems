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
	    int sum=0;
	    int m=0;
	    int arr[n-1];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>arr[i];
	        
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        sum=sum+arr[i];
            
            
	        
	        
	        
	    }
        sort(arr,arr+n-1);
	    cout<<sum+arr[n-2]<<endl;
	    
	}
	return 0;
}
