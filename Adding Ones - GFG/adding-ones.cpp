//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        // 1
        // 2 3 4
        // 3
        
        for(int i = 0; i<k; i++){
            a[updates[i]-1]++;
        }
        
        // if(a[n-1] == 0){
            for(int i = 1; i<n; i++){
            // a[i] = a[updates[k-1]-1];
                a[i] += a[i-1];
            }
        // }=
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n]={0}, updates[k]={0};
		for(int i = 0; i < k; i++)
		cin>>updates[i];
		Solution ob;
		ob.update(a, n, updates, k);
		
		for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends