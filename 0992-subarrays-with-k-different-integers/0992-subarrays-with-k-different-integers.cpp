class Solution {
public:
    int atMost(vector<int>& nums, int k){

        unordered_map<int,int>m;
        int j = 0,res = 0;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
            // if(m.size() == k)
            //     res++;
            while(m.size() > k){
                m[nums[j]]--;
                if(m[nums[j]] == 0)
                    m.erase(nums[j]);
                j++;
                // if(m.size() == k)
                //     res++;
            }
            res += i - j + 1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};