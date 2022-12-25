class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
        
        int n = words.size();
        
        //simple thing to maintain the visited node when its pass that mean its visited true if all the node visited than 
        //terminated the loop 
        vector<bool>visited(n,false);
        //left move         // right move 
        int l = startIndex,r = startIndex;
        int res = 0;
        
        while(!visited[l] || !visited[r]){
            
            if(words[l] == target || words[r] == target){
                return res;
            }
            
            visited[l] = true;
            visited[r] = true;
            l--;
            r++;
            
            res++;
            
            //when l value -1 that means follow to circular move that means going to last index 
            l = l == -1 ? n-1:l;
            
            //its also when right pointer come to the n/ isequal to n than its move forward starting pointer
            r = r == n ? 0 : r;
        }
        
        return -1;
        
    }
};