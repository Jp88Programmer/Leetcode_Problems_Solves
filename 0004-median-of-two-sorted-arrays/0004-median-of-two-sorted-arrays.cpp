class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() > nums2.size()) return findMedianSortedArrays(nums2,nums1);
        
        int m = nums1.size();
        int n = nums2.size();
        
        int s = 0, e = m;
        
        while(s <= e){
            int cut1 = (s + e)>>1;
            int cut2 = (m + n + 1)/2 - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : nums2[cut2-1];
            
            int r1 = cut1 == m ? INT_MAX : nums1[cut1];
            int r2 = cut2 == n ? INT_MAX : nums2[cut2];
            
            if(l1 <= r2 && l2 <= r1){
                if((m + n) % 2 == 0){
                    return (max(l1,l2) + min(r1,r2))/2.0;
                }else{
                    return max(l1,l2);
                }
            }else if(l1 > r2){
                e = cut1 - 1;
            }else{
                s = cut1 + 1;
            }
        }
        return 0.0;
    }
};