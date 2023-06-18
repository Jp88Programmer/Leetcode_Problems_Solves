//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        deque<int>q;
        int ans = -1;
        for(int i = 1; i<=N; i++){
            q.push_back(i);
        }
        
        while(!q.empty()){
            int i = 0;
            while(!q.empty() && i < k){
                ans = q.front();
                q.pop_front();
                i++;
            }
            i = 0;
            while(!q.empty() && i < k){
                ans = q.back();
                q.pop_back();
                i++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends