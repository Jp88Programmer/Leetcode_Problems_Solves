class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
       unordered_map<int,int>m;
        vector<int>ans;
        if(nums1.size()<nums2.size()){
            for(auto i : nums1){
                m[i]++;
            }
            
            for(auto i : nums2){
                if(m[i]){
                    ans.push_back(i);
                    m[i]--;
                }   
            }
        }else{
            for(auto i : nums2){
                m[i]++;
            }
            
            for(auto i : nums1){
                if(m[i]){
                    ans.push_back(i);
                    m[i]--;
                }
            }
        }
        
        return ans;
    }
};