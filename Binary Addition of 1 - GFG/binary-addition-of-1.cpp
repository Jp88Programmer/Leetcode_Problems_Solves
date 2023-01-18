//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string binaryAdd(int n, string s){
        // code here
        // bool flag = false;
//  int n = s.length();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int sum = s[i] - '0' + carry;
        carry = sum >> 1;
        s[i] = (sum & 1) + '0';
    }
    if (carry) {
        s = '1' + s;
    }
    return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        Solution ob;
        cout<<ob.binaryAdd(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends