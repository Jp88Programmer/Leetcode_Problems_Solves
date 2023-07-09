//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // map<int,int>m;
        int fr[1000000] = {0};
        for(int i = 0;i <n; i++){
            if(arr[i] > 0)
                fr[arr[i]]++;
        }
        int ans = -1;
        for(int i =1;i<1000000;i++){
            if(fr[i] == 0){
                ans = i;
                break;
            }
        }
        // if(ans == -1) {
        //     int max = *max_element(arr,arr+n);
        //     return max + 1;
        // }
        return ans;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends