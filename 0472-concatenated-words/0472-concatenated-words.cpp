class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        
        /*
        unordered_map<string,int>m;
        
        for(auto w : words){
            m[w]++;
        }
        
        vector<string>ans;
        for(auto w : words){
            string str = "";
            int count = 0;
            for(int j = 0; j < w.size(); j++){
                str += w[j];
                if(m[str] > 0 && str.size() < w.size()){
                    count++;
                    
                }
                
                if(count >=2){
                    ans.push_back(w);
                    break;
                }
                
            }
        }
        return ans;
        */
          unordered_set<string> words_set;
        for (string word : words) words_set.insert(word);
        vector<string> res;
    
        for (string word : words) {
            int n = word.size();
            vector<int> dp(n + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < n; i++) {
                if (!dp[i]) continue;
                for (int j = i + 1; j <= n; j++) {
                    if (j - i < n && words_set.count(word.substr(i, j - i))) {
                        dp[j] = 1;
                    }
                }
                if (dp[n]) {
                    res.push_back(word);
                    break;
                }
            }
        }
        return res;
    }
};