class Solution {
public:
    
    
   bool search(vector<vector<char>>& b, string& w,int i,int j,int k,int& m,int& n){
        if(k==w.size()) return true;
        if(i==m || j==n || i<0 || j<0 || b[i][j]!=w[k]) return false;
        char c=b[i][j];
        b[i][j]='*';
        if(search(b,w,i,j+1,k+1,m,n)) return true;
        if(search(b,w,i+1,j,k+1,m,n)) return true;
        if(search(b,w,i,j-1,k+1,m,n)) return true;
        if(search(b,w,i-1,j,k+1,m,n)) return true;
        b[i][j]=c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(search(board,word,i,j,0,m,n))
                        return true;
                }
            }
        }
        return false;
    }
};