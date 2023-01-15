//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string s)
	{
	    // Your Code Here
	   // int val = stoi(S);
	    int o=0,e=0;
	    for(int i = 0 ; i<s.size();i++){
	        
	        if(i%2){
	            o+= s[i]-48;
	        }else{
	            e += s[i]-48;
	        }
	    }
	   // return val % 11 == 0;
	   return abs(o-e) % 11 == 0;
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends