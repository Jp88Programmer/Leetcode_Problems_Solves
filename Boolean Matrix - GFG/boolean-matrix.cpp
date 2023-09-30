//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void fillRow(vector<vector<int> > &mat,int row){
        for(int i = 0 ; i<mat[0].size(); i++){
            mat[row][i] = 1;
        }
    }
    void fillCols(vector<vector<int> > &mat,int col){
        for(int i = 0 ; i<mat.size(); i++){
            mat[i][col] = 1;
        }
    }
    void booleanMatrix(vector<vector<int> > &mat)
    {
        // code here 
        int m = mat.size(),n = mat[0].size();
        vector<pair<int,int>>ans;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 1)
                    ans.push_back({i,j});
            }
        }
        
        for(int i = 0; i<ans.size(); i++){
            fillRow(mat,ans[i].first);
            fillCols(mat,ans[i].second);
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends