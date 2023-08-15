class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        
        return a.first > b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
        map<int,int>m;
        
        for(auto i : nums)
            m[i]++;
        
        vector<pair<int,int>>v;
        
        for(auto x: m){
            if(x.second > 0)
                v.push_back({x.second,x.first});
        }
        
        sort(v.begin(),v.end(),comp);
        
        nums.clear();
        
        for(int i = 0 ; i < v.size() && k > 0 ; i++,k--)
            nums.push_back(v[i].second);
        
        return nums;
    }
};