class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
        long long d=0,u=0;
        for(int i = 0; i<nums1.size(); i++){
            if(nums1[i] == nums2[i]) continue;
            int t = abs(nums1[i]-nums2[i]);
            if(k == 0) return -1;
            else if(t %k == 0){
                if(nums1[i] > nums2[i])
                    d += t/k;
                else
                    u += t/k;
            }
            else
                return -1; 
        }
        
        return d == u ? u : -1;
    }
};