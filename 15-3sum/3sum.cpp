class Solution {
public:
    vector<vector<int>>vInt;
   void twoSum(int i,int j,vector<int>&nums,int target){
        
        int a = nums[i-1];
       
        
        while(i < j){
            
            if(nums[i] + nums[j] > target)
                j--;
            else if(nums[i] + nums[j] < target)
                i++;
            else{
                 vector<int>v;
                // v.push_back({a,nums[i],nums[j]});
                v.push_back(a);
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                // cout << a <<  " " <<nums[i] <<  " "  <<  " " << nums[j] << " ";
                vInt.push_back(v);
                
                while(i < j && nums[i] == nums[i+1]) i++;
                
                while(i < j && nums[j] == nums[j-1]) j--;
                
                i++;
                
                j--;
            }
        }
        
        
        
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
            
        sort(nums.begin(),nums.end());
        
//         for(int i = 0 ; i < nums.size() ; i++){
//             cout << nums[i] << " " ;
//         }
        
        for(int i = 0 ; i < nums.size() ; i++)
            if(i==0 || nums[i] != nums[i-1])
                twoSum(i+1,nums.size() - 1,nums,0-nums[i]);
        
        return vInt;
    }
};