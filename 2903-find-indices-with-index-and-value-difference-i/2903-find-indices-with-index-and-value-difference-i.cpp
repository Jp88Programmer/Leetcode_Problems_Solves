class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
         vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                if(abs(i-j) >= id && abs(nums[i]-nums[j]) >= vd){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        
        if(ans.size() == 0) return {-1,-1};
        return ans;
    }
};