//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        
        int s = 0,e = n-1;
        int f = -1,l = -1;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == x){
                f = i;
                break;
            }
        }
         for(int i = arr.size()-1; i>=0; i--){
            if(arr[i] == x){
                l = i;
                break;
            }
        }
        
        if(f == -1 || l == -1) return {-1};
        return {f,l};
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends