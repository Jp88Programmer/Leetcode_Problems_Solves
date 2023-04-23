class Solution {
public:
    int smi(map<int,int>&m,int x){
        int count = 0;
        for(auto i : m){
            count += i.second;
            if(count >= x)
                return i.first;
        }
        return INT_MAX;
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        int n = nums.size();
        vector<int>res;
        map<int,int>m;
        int j = 0;
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
            while((i-j+1) > k){
                m[nums[j]]--;
                if(m[nums[j]] == 0){
                    m.erase(nums[j]);
                }
                j++;
            }
            
            if((i-j+1)==k){
                int sm = smi(m,x);
                if(sm == INT_MAX || sm >= 0)
                    res.push_back(0);
                else
                    res.push_back(sm);
            }
        }
        return res;
    }
};