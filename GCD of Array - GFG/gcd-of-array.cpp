//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int gcde(int a ,int b){
	    if(a % b == 0) return b;
	    return gcde(b,a%b);
	}
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	for(int i = 1; i<N; i++){
    	    arr[i] = gcde(arr[i-1],arr[i]);
    	}
    	return arr[N-1];
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends