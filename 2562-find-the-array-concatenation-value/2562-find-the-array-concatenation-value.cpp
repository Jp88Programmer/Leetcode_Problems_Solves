class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        long long res = 0;
        if(nums.size() == 1) return nums[0];
        
        int s = 0,e = nums.size()-1;
        
        while(s <= e){
            if(s == e){
                res += nums[s];
                break;
            } 
            string str = to_string(nums[s++]) + to_string(nums[e--]);
            res += stoi(str);
        }
        
        return res;
    }
};