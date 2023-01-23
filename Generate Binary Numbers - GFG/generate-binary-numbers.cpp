//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
string fun(int n){
    string str = "";
    while(n>0){
        int r = n&1;
        str += to_string(r);
        // n=n>>1;
        n /= 2;
    }
    // cout << str << endl;
    reverse(str.begin(),str.end());
    return str;
}
vector<string> generate(int N)
{
	// Your code here
	vector<string>ans;
	for(int i = 1; i<=N; i++){
	    ans.push_back(fun(i));
	}
	return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends