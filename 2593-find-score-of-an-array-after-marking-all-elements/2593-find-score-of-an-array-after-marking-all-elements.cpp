class Solution {
public:
    
    static bool  comp(pair<int,int>&p1,pair<int,int>&p2){
        
        if(p1.first < p2.first){
            return true;
        }else if(p1.first == p2.first){
            if(p1.second < p2.second)
                return true;
            else
                return false;
        }
        
        return false;
    }
    long long findScore(vector<int>& nums) {
        
        vector<pair<int,int>>arr;
        
        for(int i = 0; i<nums.size(); i++){
            arr.push_back({nums[i],i});
        }
        
        sort(arr.begin(),arr.end(),comp);
        
        long long sum = 0; 
        
        vector<bool>marked(nums.size(),false);
        int n = arr.size(); 
        int count = 0; 
        for(int i = 0; i<arr.size(); i++){
            auto ind = arr[i].second;
            if(!marked[ind]){
                // int ind = arr[i].second();
                sum += arr[i].first; 
                marked[ind] =  true;
                if(ind + 1 < n)
                    marked[ind+1]=true;
                if(ind - 1 >= 0)
                    marked[ind-1]=true;
            }
        }
        
        return sum ;
    }
};