//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string str)
{
    // your code here
    unordered_map<char,int>m;
    int j = 0,ans = 0,len = 0;
    for(int i = 0; i<str.size(); i++){
        m[str[i]]++;
        len++;
        while(m[str[i]]>1){
            m[str[j]]--;
            j++;
            len--;
        }
        ans = max(ans,len);
    }
    return ans;
}