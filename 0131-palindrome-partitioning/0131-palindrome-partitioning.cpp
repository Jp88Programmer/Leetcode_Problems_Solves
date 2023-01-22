class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>>ans;
        palPartition(0,s,ds,ans);
        return ans;
    }
    
    void palPartition(int id,string s,vector<string>&ds,vector<vector<string>>&ans){
        
        if(id == s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = id ; i<s.size(); i++){
            
            string str = s.substr(id,i-id+1);
            if(isPal(str)){
                ds.push_back(str);
                palPartition(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    
    bool isPal(string str,int s,int e){
        
        while(s <= e){
            if(str[s++] != str[e--]) return false;
        }
        return true;
    }
    
    bool isPal(string str){
        
        int s = 0;
        int e = str.size()-1;
        while(s <= e){
            if(str[s++] != str[e--]) return false;
        }
        return true;
    }
};