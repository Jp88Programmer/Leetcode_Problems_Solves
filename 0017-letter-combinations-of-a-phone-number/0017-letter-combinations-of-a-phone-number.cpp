class Solution {
public:
    
    void fun(int id,string digits,vector<string>&v,vector<string>&ans,string &str){
        
        if(id == digits.size()){
            ans.push_back(str);
            return ;
        }
        
        int digit = digits[id] - 48;
        int len = v[digit].size();
        
        for(int i = 0; i<len ; i++){
            str.push_back(v[digit][i]);
            fun(id+1,digits,v,ans,str);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        
        if(digits == "") return {};
        vector<string>v(12,"");
        v[0] = "0";
        v[1] = "1";
        v[2] = "abc";
        v[3] = "def";
        v[4] = "ghi";
        v[5] = "jkl";
        v[6] = "mno";
        v[7] = "pqrs";
        v[8] = "tuv";
        v[9] = "wxyz";
        v[10] = "*";
        v[11] = "#";
        
        vector<string>ans;
        string str = "";
        
        fun(0,digits,v,ans,str);
        
        return ans;
    }
};