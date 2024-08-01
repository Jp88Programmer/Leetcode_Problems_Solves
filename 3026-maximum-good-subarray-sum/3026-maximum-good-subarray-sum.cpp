class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>indexMap;
        long long maxSum = -1e15;
        vector<long long>prefixSum(nums.size(),0);
        prefixSum[0] = nums[0];
        indexMap[nums[0]] = 0;
        
        for(int i = 1; i<nums.size(); i++){
            prefixSum[i] = prefixSum[i-1]+nums[i];
        }
        
        for(int i = 1; i<nums.size(); i++){
            
            int t1 = nums[i] + k;
            int t2 = nums[i] - k;
            
            if(indexMap.find(t1) != indexMap.end()){
                long long sum = prefixSum[i] - prefixSum[indexMap[t1]] + nums[indexMap[t1]];
                maxSum = max(maxSum,(long long)sum);
            }
            
            if(indexMap.find(t2) != indexMap.end()){
                long long sum = prefixSum[i] - prefixSum[indexMap[t2]] + nums[indexMap[t2]];
                maxSum = max(maxSum,(long long)sum);
            }
            
            if(indexMap.find(nums[i]) != indexMap.end()){
                if(prefixSum[i] >= prefixSum[indexMap[nums[i]]])
                    continue;
            }
            
            indexMap[nums[i]] = i;
        }
        
        if(maxSum == -1e15) return 0;
        
        return maxSum;
        
    }
        
    
};