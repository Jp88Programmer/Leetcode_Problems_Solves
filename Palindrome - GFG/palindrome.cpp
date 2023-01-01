//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string str = to_string(n);
		    
		    int s = 0,e = str.size()-1;
		    
		    while( s < e){
		        if(str[s++] != str[e--]) {
		          //  cout << "No" << endl;
		          return "No";
		        }
		    }
		    
		    return "Yes";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends