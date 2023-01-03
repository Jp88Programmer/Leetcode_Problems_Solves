class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int count = 0;
        for(int col = 0; col<strs[0].size(); col++){
            
            for(int row = 1; row<strs.size(); row++){
                
                if(strs[row-1][col] > strs[row][col]){
                    count++;
                    break;
                }
                
           
            }
        }
        
        return count;
    }
};