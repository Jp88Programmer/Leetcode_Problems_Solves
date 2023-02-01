//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
void dfs(vector<vector<int>>&ans,vector<vector<int>>&image,int startColor,int sr,int sc,int color){
        
        ans[sr][sc] = color;
        int m = image.size();
        int n = image[0].size();
		// -1,0,1,0
		// 0,-1,0,1
        
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,-1,0,1};
        
        for(int i = 0; i<4; i++){
            
            int x = sr + dr[i];
            int y = sc + dc[i];
            
            if(x >= 0 && x < m && y >= 0 && y < n && ans[x][y] == startColor && ans[x][y] != color){
                dfs(ans,image,startColor,x,y,color);
            }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>> ans = image;
        
//         for(auto i : image){
//             vector<int>v;
//             for (auto j : i)
//                 v.push_back(j);
//             ans.push_back(v);
//         }
        
        dfs(ans,image,image[sr][sc],sr,sc,newColor);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends