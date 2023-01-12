//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        
        if(N <= 1) return 0;
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto i : arr) pq.push(i);
        
        int sum = 0;
        
        while(!pq.empty()){
            auto e1 = pq.top();
            pq.pop();
            sum += e1;
            if(pq.empty()){
                break;
            }
            auto e2 = pq.top();
            pq.pop();
            sum += e2;
            // cout << sum << endl;
            if(pq.empty()){
                break;
            }
            pq.push(e1 + e2);
            
            // cout << e1 << " " << e2 << endl;
        }
        
        return sum ;
    }
};



//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends