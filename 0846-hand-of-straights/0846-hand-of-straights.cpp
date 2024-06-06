class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gs) {
        map<int,int>m;
        for(auto i : hand) m[i]++;

        for(auto x : m){
            if(x.second > 0){
                for(int i = gs - 1; i>=0; --i){
                    m[x.first + i] -= m[x.first];
                    if(m[x.first + i] < 0) return false;
                }
            }
        }
        return true;
    }
};