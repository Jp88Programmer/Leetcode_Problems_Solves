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
        int carry = 0;
        
        if(s[s.size()-1] == '0'){
                s[s.size()-1] = '1';
            }else{
                s[s.size()-1] = '0';
                carry = 1;
            }
            
        for(int i = s.size()-2; i>=0; i--){
            
            if(s[i] == '0' && carry == 1){
                s[i] = '1';
                carry = 0;
            }
            if(s[i]=='1' && carry == 1){
                s[i] = '0';
            }
        }
        
        if(carry == 1){
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