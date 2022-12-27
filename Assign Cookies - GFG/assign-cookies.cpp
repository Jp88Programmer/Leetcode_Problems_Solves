//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(int N, int M, vector<int> &g, vector<int> &s) {
        // code here
        
        // sort this method to sort all the type or also make the user
    //defined sort 
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int n = g.size(),m = s.size(),i=0;
    for(int j = 0;  i<n && j < m ; j++) if(s[j] >= g[i]) i++;
    return i;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> greed(N), sz(M);
        for (int i = 0; i < N; i++) {
            cin >> greed[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> sz[i];
        }
        Solution obj;
        cout << obj.maxChildren(N, M, greed, sz) << endl;
    }
    return 0;
}
// } Driver Code Ends