class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        // 1.first Method 
        
        map<map<char,int>,vector<string>>map_list;
        
        
        vector<vector<string>>result;
        
        for(auto str : strs){
            
            vector<string>v;
            map<char,int>mf;
            
            for(int i=0 ; i<str.size(); i++)
                mf[str[i]]++;
            
        
            auto f = map_list.find(mf);
            
            if(f != map_list.end()){
                // v.push_back(str);
                f->second.push_back(str);
            }else{
                
                v.push_back(str);
                map_list.insert({mf,v});
            }
            
        }
        
        for(auto it = map_list.begin(); it!= map_list.end(); it++){
            result.push_back(it->second);
        }
        
        return result;
    
        
        // 2.second Method 
        /*
        vector<vector<string>> ans;
        unordered_map<string,int> m;
        
        for(string s : strs){
            string tmp = s;
            sort(tmp.begin(), tmp.end()); 
            if (m.find(tmp) == m.end()){
                m[tmp] = ans.size();
                ans.push_back({s});
            }
            else{
                ans[m[tmp]].push_back(s);
            }
        }
        return ans;
        */
        
        // 3.third Method
        /*
        vector<vector<string>>ans;
        map<string,vector<int>>m;
        
        vector<string>sts = strs;
        for(int i = 0; i<sts.size(); i++){
            sort(sts[i].begin(),sts[i].end());
            m[sts[i]].push_back(i);
        }
        
        for(auto x:m){
            
            if(x.second.size() > 0){
                
                vector<string>v;
                for(auto i : x.second){
                    v.push_back(strs[i]);
                }
                ans.push_back(v);
            }
        }
        
        return ans;
        */
        
        // 4.fourth Method
        /*
         // placebo
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;  // map to store substrings for each anagram
        // add all strings in strs to map based on their anagram
        for(int i = 0; i < strs.size(); i++)
        {
            // add to map based on reordered char vector for string
            string tmp = strs[i];
            // sort tmp
            sort(tmp.begin(), tmp.end());
            // ex: bat -> abt, eat -> aet
            m[tmp].push_back(strs[i]);
        }
        // go through map and add all anagram substrings to ans
        for(auto i = m.begin(); i != m.end(); i++)
        {
            ans.push_back(i->second);
        }
        return ans;
        */
    }
};