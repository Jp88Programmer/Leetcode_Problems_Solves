class Solution {
public:
    pair<int,int> maxmin(vector<int>&v){
        
        if(v.size() == 0) return {-1,-1};
        int mi = v[0];
        int ma = v[0];
        
        for(int i = 1; i<v.size(); i++){
            if(mi > v[i]) mi = v[i];
            if(ma < v[i]) ma = v[i];
        }
        
        pair<int,int>p = {mi,ma};
        
        return p;
    }
    long long subArr(vector<int>& nums,int minK,int maxK){
        
        vector<int>v;
        long long count = 0;
        for(int i = 0; i<nums.size(); i++){
            
            for(int k = 1; k <= nums.size(); k++){
                

                for(int j = i; j < k; j++){
                    v.push_back(nums[j]);
                }
                
                for(auto i : v) cout << i << " ";
                cout << endl;
                int ma = *max_element(v.begin(),v.end());
                int mi = *min_element(v.begin(),v.end());
                
                pair<int,int>p = maxmin(v);
                
                
                // cout << "________________" << endl;
                // cout << ma << " " << mi << endl;
                v.clear();
                if(p.second == maxK && p.first == minK)
                    count++;
            
            }
            
        }
        
        return count;
    }
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        // return subArr(nums,minK,maxK);
        
        long res = 0;
        bool minf = false,maxf = false;
        int start = 0,mins = 0,maxs = 0;
        
        for(int i = 0; i< nums.size(); i++){
            
            int num = nums[i];
            
            if(num < minK || num > maxK){
                minf = false;
                maxf = false;
                start = i+1;
            }
            
            if(num == minK){
                minf = true;
                mins = i;
            }
            
            if(num == maxK){
                maxf = true;
                maxs = i;
            }
            
            if(minf && maxf){
                
                res += (min(mins,maxs) - start + 1);
            }
        }
        
        return res;
    }
};