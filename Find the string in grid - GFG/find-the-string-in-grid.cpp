//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool isValid(int x, int y, int rows, int columns) {
        return (x >= 0 && x < rows && y >= 0 && y < columns);
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int dx[] = {-1,-1,-1,0,0,1,1,1};
        int dy[] = {-1,0,1,-1,1,-1,0,1};
    
        vector<vector<int>>ans;
        int rows = grid.size();
        int columns = grid[0].size();
        int wLen = word.length();
    
        for (int i = 0; i <rows; i++) {
            for (int j = 0; j<columns; j++) {
                if (grid[i][j] == word[0]) {
                    for (int k =0; k<8; k++) {
                        int curr_dx =dx[k];
                        int curr_dy =dy[k];
                        int x = i +curr_dx;
                        int y = j +curr_dy;
                        int idx=1;
    
                        while (idx <wLen && isValid(x, y, rows, columns) && grid[x][y] ==word[idx]) {
                            x+= curr_dx;
                            y+= curr_dy;
                            idx++;
                        }
    
                        if (idx==wLen) {
                            ans.push_back({i, j});
                            break;
                        }
                    }
                }
            }
        }
    
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends