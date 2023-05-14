class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        
        int cnt = 0;
        for(auto i : derived){
            if(i == 1)
                cnt++;
        }
        
        return cnt % 2 == 0;
    }
};