class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int ones = 0;
        vector<string>strs;
        vector<string>str;
        int j = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1') ones++;
            while(ones >= k){
                if(ones == k)
                    strs.push_back(s.substr(j,i-j+1));   
                if(s[j] == '1')
                    ones--;
                j++;
            }
        }
        int minlen = INT_MAX;
        for(auto i : strs){
            cout <<  i << endl;
            int size = i.size();
            minlen = min(minlen,size);
        }
        
        for(auto i : strs){
            if(i.size() == minlen){
                str.push_back(i);
            }
        }
        
        sort(str.begin(),str.end());
        
        if(str.size() == 0) return "";
        return str[0];
        
    }
};