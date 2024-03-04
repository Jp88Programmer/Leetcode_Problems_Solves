class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        
        int i = 0 ;
        int j = tokens.size()-1;
        int score = 0;
        int maxScore = 0;
        
        if(tokens.size() == 0) return 0 ;
        
        if(tokens[0] > power) return 0 ;
        
        while(i <= j){
            
            if(tokens[i] <= power){
                score += 1;
                power -= tokens[i];
                i++;
            }else{
                score -= 1;
                power += tokens[j];
                j--;
            }
            maxScore = max(maxScore,score);
        }
        
        return maxScore;
    }
};