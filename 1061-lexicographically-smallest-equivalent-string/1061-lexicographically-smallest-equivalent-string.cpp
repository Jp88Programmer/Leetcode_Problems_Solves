class Solution {
public:
    
    int found(vector<set<char>>&vset,char ch1,char ch2){
        
        for(int i = 0; i<vset.size(); i++){
            
            if(vset[i].find(ch1) != vset[i].end() || vset[i].find(ch2) != vset[i].end()){
                return i;
            }
        }
        
        return -1;
    }
    int found(vector<set<char>>&vset,char ch){
        
        for(int i = 0; i<vset.size(); i++){
            
            if(vset[i].find(ch) != vset[i].end()){
                return i;
            }
        }
        
        return -1;
    }
    
    void mergearound(vector<set<char>>&vset){
        
        for(int i =0; i < vset.size();i++){
            
            for(int j = i+1; j < vset.size();j++){
                
                for(auto sval : vset[j]){
                    if(vset[i].find(sval) != vset[i].end()){
                        vset[i].insert(vset[j].begin(),vset[j].end());
                        break;
                    }
                }
                
            }
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        
        vector<set<char>>vset;
        
        for(int i = 0; i<s1.size(); i++){
            
            int id = found(vset,s1[i],s2[i]);
            
            if(id!=-1){
                vset[id].insert(s1[i]);
                vset[id].insert(s2[i]);
            }else{
                set<char>s;
                s.insert(s1[i]);
                s.insert(s2[i]);
                vset.push_back(s);
            }
        }
        
        mergearound(vset);
        string ans = "";
        for(int i =0; i<baseStr.size(); i++){
            int id = found(vset,baseStr[i]);
            
            if(id!=-1){
                ans += *vset[id].begin();
            }else{
                ans += baseStr[i];
            }
        }
        
        return ans;
        
    }
};