class Solution {
public:
    int takeCharacters(string s, int k) {
        
        int counta=0,countb=0,countc=0;
        
        //count the character of a,b and c
        for(auto i : s){
            if(i == 'a') counta++;
            if(i == 'b') countb++;
            if(i == 'c') countc++;
        }
        
        //if under k than its not possible 
        if(counta < k || countb < k || countc < k) return -1;
        
        counta -= k,countb -= k,countc -= k;
        int n = s.size(),i = 0,j =0,ans = 0;
        
        //make the window to count particuler count in the window 
        int wca = 0,wcb = 0,wcc = 0;
        
        while(j < n){
            
            //count the character of frequency 
            if(s[j] == 'a') wca++;
            if(s[j] == 'b') wcb++;
            if(s[j] == 'c') wcc++;
            
            //if its over the main count than we decrease the window frequency 
            while(counta < wca || countb < wcb || countc < wcc ){
                
                if(s[i] == 'a') wca--;
                if(s[i] == 'b') wcb--;
                if(s[i] == 'c') wcc--;
                i++;
            }
            
            ans = max(ans,j-i+1);
            j++;
        }
        
        return n - ans;
    }
};