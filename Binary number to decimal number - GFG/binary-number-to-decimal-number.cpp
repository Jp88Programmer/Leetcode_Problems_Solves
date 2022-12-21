//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int j = 0,two = 1,ans = 0;
        for(int i = str.size() - 1 ;i>=0; i--){
            
            ans += (str[i] - 48) * two;
            two *= 2;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends