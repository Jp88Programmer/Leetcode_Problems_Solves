class Solution {
public:
    
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        vector<int>ans;
        vector<int>v;
        v.push_back(0);
        for(int i = 0; i<words.size(); i++){
            string w = words[i];
            char start = w[0];
            char end = w[w.size()-1];
            if(isVowel(start) && isVowel(end)){
                v.push_back(v.back()+1);
            }else
                v.push_back(v.back());
        }
        
        for(auto q : queries){
            ans.push_back(v[q[1]+1] - v[q[0]]);
        }
       
        return ans;
        
        
       
    }
};