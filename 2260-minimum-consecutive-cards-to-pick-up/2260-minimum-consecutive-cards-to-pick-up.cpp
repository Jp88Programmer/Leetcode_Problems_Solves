class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int j = 0,len = 0,minLen = INT_MAX;
        unordered_map<int,int>m;
        for(int i = 0; i<cards.size(); i++){
            m[cards[i]]++;
            len++;
            while(m[cards[i]] > 1){
                m[cards[j]] = m[cards[j]] == 0 ? 0 : m[cards[j]] - 1;
                j++;
                len--;
                minLen = min(minLen,len+1);
            }
        }
        
        return minLen == INT_MAX ? -1 : minLen;
    }
};