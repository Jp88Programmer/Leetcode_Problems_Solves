class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        //its get the tle 
        //what to do 
        /*
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){   
                sum += nums[j];
                if(sum % k == 0){
                    count++;
                } 
            }
        }
        return count;
        */
        
        unordered_map<int,int>m;
        m[0] = 1;
        int sum = 0,count = 0;
        for(auto i : nums){
            sum += i;
            //use with negative element 
            int r = (sum % k + k) % k;
            // int r = sum % k;
            count += m[r];
            m[r]++;
        }
        
        return count;
    }
};