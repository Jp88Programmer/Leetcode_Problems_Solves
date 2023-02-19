class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>>ans;
        map<int,int>m;
        
        for(auto arr : nums1){
            if(m[arr[0]])
                m[arr[0]] += arr[1];
            else
                m[arr[0]] = arr[1];
        }
        
        for(auto arr : nums2){
            if(m[arr[0]])
                m[arr[0]] += arr[1];
            else
                m[arr[0]] = arr[1];
        }
        
        for(auto x : m){
            ans.push_back({x.first,x.second});
        }
        
        return ans;
    }
};