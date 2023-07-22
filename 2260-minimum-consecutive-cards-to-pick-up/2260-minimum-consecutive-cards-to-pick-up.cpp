class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int j = 0,len = 0,minLen = INT_MAX;
        unordered_map<int,int>m;
        for(int i = 0; i<cards.size(); i++){
            if(m.find(cards[i]) != m.end()){
                minLen = min(minLen,i-m[cards[i]]+1);
            }
            m[cards[i]] = i;
        }
        
        return minLen == INT_MAX ? -1 : minLen;
    }
};