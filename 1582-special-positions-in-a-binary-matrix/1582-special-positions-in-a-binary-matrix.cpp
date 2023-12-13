class Solution {
public:
    bool isSpeical(vector<vector<int>>& mat,int ix,int jy){
        int count1 = 0,count2 = 0;
        for(int j = 0; j<mat[0].size(); j++){
            if(mat[ix][j] == 1 && mat[ix][jy] == 1)
                count1++;
        }
        
        
        for(int i = 0; i<mat.size(); i++){
            if(mat[i][jy] == 1 &&  mat[ix][jy] == 1)
                count2++;
        }
        
        cout << count1 << " " << count2 << endl;
        return (count1) + (count2) == 2;
    }
    int numSpecial(vector<vector<int>>& mat) {
        
        int count = 0;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                if(isSpeical(mat,i,j))
                    count++;
            }
        }
        return count;
    }
};