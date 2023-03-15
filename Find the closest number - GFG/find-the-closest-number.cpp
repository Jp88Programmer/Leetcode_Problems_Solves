//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        vector<int>v;
        for(int i = 0; i<n; i++){
            v.push_back(abs(arr[i]-target));
        }
        
        int minVal = arr[0];
        int diff = v[0];
        
        for(int i = 1; i<n; i++){
            if(diff>=v[i]){
                diff = v[i];
                minVal = arr[i];
            }
        }
        return minVal;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends