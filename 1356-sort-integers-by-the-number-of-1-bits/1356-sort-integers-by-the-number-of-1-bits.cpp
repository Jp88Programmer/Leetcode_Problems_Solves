class Solution {
public:
    bool static cmp(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.second <= p2.second){
            if(p1.second == p2.second) 
                return p1.first < p2.first;
            return true;
        }
        return false;
    }
    int countBits(int num){
        int bits = 0;
        while(num > 0){
            bits += num & 1;
            num /= 2;
        }
        return bits;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        
        for(int i = 0; i<arr.size(); i++){
            v.push_back({arr[i],countBits(arr[i])});
        }
        sort(v.begin(),v.end(),cmp);
        
        vector<int>ans;
        
        for(auto i : v){
            ans.push_back(i.first);
        }
        
        return ans;
    }
};