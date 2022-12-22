class Solution {
    
private:
    
    int f(int id,vector<int>&nums,int k,int sum){
        
        if(id == nums.size()){
            
            if(sum == k)
                return 1;
            else
                return 0;
        }
        
        sum += nums[id];
        int l = f(id+1,nums,k,sum);
        sum -= nums[id];
        int r = f(id+1,nums,k,sum);
        return l + r ;
    }
    
public:
    int subarraySum(vector<int>& nums, int k) {
        
        // 1.first solution but not work 
        /* first try ----------------------------
        int start=0,end=0;
        int n = nums.size();
        
        int i = 0 ; 
        int count=0,sum=0;
        
        while(start<n && end < n){
           
            sum += nums[end];
            end++;
            
            if(sum == k){
                count++;
                sum -= nums[start];
                start++;
            }
            
            if(sum > k){
                sum = 0 ;
                start = end;
            }
            
            if(sum < 0){
                
            
                sum -= nums[start];
                
                start++;
                
            }
                
            
        }
        
        return count;*/
        
        // 2.steps solution
        unordered_map<int,int>m;
        int sum = 0;
        m[sum] = 1;
        int res = 0 ;
        
        for(auto e : nums){
            sum += e;
            int f = sum - k ;
            if(m[f] > 0)
                res += m[f];
            m[sum]++;
        }
        return res ;
    }
};