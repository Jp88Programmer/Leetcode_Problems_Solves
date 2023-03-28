//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    
    int binary(vector<int>&arr){
        int s = 0,e = arr.size()-1;
        while(s <= e){
            int m = s + (e - s)/2;
            if(arr[m] == 1){
                e = m - 1;
            }
            if(arr[m] == 0){
                s = m + 1;
            }
        }
        
        if(s < arr.size()){
            return arr.size() - s;
        }
        
        return 0;
        
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int maxInd = -1;
	    int maxVal = 0;
	    
	    for(int i = 0; i<arr.size(); i++){
	       int num = binary(arr[i]);
	       //cout << num <<endl;
	       if(maxVal < num){
	           maxVal = num ;
	           maxInd = i;
	       }
	    }
	    
	    return maxInd;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends