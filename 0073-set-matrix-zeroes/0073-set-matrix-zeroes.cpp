class Solution {
public:
    void conrowcol(vector<vector<int>>& matrix,int x,int y){
        for(int i = 0; i<matrix.size(); i++){
            for(int j =0; j<matrix[i].size(); j++){
                if(i == x || j == y)
                    matrix[i][j] = 0;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<vector<int>>v;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    v.push_back({i,j});
                }
            }
        }
        
        for(auto i : v){
            conrowcol(matrix,i[0],i[1]);
        }
    }
};