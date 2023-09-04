class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        vector<int>div;
        int i = 0,j = 0;
        int count =0;
        for(; i < g.size() && j < s.size();j++){
            if(s[j]>=g[i]) i++;
        }
        return i;
    }
};