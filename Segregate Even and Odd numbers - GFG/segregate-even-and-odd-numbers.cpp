//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    
	   // int a[n];
	   int *a = new int[n];
	    int k = 0;
	    for(int i = 0; i<n; i++){
	        if(arr[i] % 2 == 0)
	            a[k++] = arr[i];
	    }
	    
	    for(int i = 0; i<n; i++){
	        if(arr[i] % 2 != 0)
	            a[k++] = arr[i];
	    }
	    
	   // arr = a/.;
	    for(int i = 0; i<n; i++){
	       // if(arr[i] % 2 == 0)
	           // a[k++] = arr[i];
	           arr[i] = a[i];
	    }
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends