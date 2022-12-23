//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter) {
         // Code here
         
         sort(inter.begin(),inter.end());
         vector<vector<int>> ans;
         int s = inter[0][0];
         int e = inter[0][1];
         for(int i=1; i<inter.size(); i++){
             
             if(inter[i][0] <= e && inter[i][1] >= s){
                 s = min(inter[i][0],s);
                 e = max(inter[i][1],e);
             }else{
                 ans.push_back({s,e});
                 s = inter[i][0];
                 e = inter[i][1];
             }
         }
         
         ans.push_back({s,e});
         
         return ans;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends