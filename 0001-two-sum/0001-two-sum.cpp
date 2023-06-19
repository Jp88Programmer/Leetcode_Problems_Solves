class Solution {
public:
    // *min_element(v.begin(),v.end());
//     vector<int>sums ;
//     void twoSum(int i , int j , vector<int>&nums,int target){
        
//         int a = nums[i] ;
//         while(i < j){
//             int sum = a+nums[i]+nums[j];
//             sum = sum - target;
//             sum.push_back(sum);
//         }
//     }
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>m;
        for(int i =0 ; i<nums.size(); i++){
            if(m.find(target-nums[i]) != m.end())
                return {m[target-nums[i]],i};
            m[nums[i]] = i ;
        }
        
        return {};
    }
};
