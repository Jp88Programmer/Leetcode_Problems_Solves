//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    }
    int minRemoval(int N, vector<vector<int>> &inter) {
        // code here
         
         sort(inter.begin(),inter.end(),cmp);
         int count = 0,pre = 0;
         for(int i = 1; i<inter.size(); i++){
             if(inter[i][0] < inter[pre][1])
                count++;
            else
                pre = i;
         }
         return count ;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends