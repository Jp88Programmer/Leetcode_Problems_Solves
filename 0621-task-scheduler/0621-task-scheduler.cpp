class Solution {
public:
    int leastInterval(vector<char>& t, int n) {
        vector<int>fr(26,0);
        for(auto i : t){
            fr[i-'A']++;
        }
        sort(fr.begin(),fr.end(),greater<int>());
        int ans = (fr[0]-1)*(n+1);
        for(auto e : fr) if(e == fr[0]) ans++;
        return max((int)t.size(), ans);
    }
};