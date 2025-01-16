class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int xo1 = 0;
        int xo2 = 0;
        if(n1 % 2 != 0){
            for(int i = 0; i<n2 ; i++) xo2 ^= nums2[i];
        }
        
        if(n2 % 2 != 0){
            for(int i = 0; i<n1 ; i++) xo1 ^= nums1[i];
        }
        
        return xo1 ^ xo2;
        
    }
};