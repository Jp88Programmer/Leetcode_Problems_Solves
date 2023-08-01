class Solution {
public:
    string minWindow(string s, string t) {
        int j = 0,res = INT_MAX,start = 0,end = 0,count = 0;
        unordered_map<int,int>m1,m2;
        for(int i = 0; i<t.size(); i++){
            if(m1[t[i]] == 0) count++;
            m1[t[i]]++;
        }
        
        for(int i = 0; i<s.size(); i++){
            // if(m1[s[i]]){
                m1[s[i]]--;
            // }
            if(m1[s[i]] == 0) count--;
            // if(count == 0){
                while(count == 0){
                    if(res > (i - j + 1)){
                        start = j;
                        res = min(res,i-j+1);
                    }
                    m1[s[j]]++;
                    if(m1[s[j]]>0)
                        count++;
                    j++;
                }
            // }
        }
        if(res != INT_MAX)
            return s.substr(start,res);
        // cout << start << " " << end << endl;
        return "";
    }
};