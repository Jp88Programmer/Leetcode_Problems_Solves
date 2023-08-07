class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.first > b.first){
            return false;
        }else if(a.first == b.first){
            if(a.second > b.second)
                return false;
        }
        return true;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<pair<int,int>>v;
        for(int i = 0; i<mat.size(); i++){
            int one = 0;
            for(int j = 0; j<mat[i].size(); j++){
                if(mat[i][j] == 1)
                    one++;
            }
            v.push_back({one,i});
        }
        
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        int i = 0;
        while(i < k){
            ans.push_back(v[i].second);
            i++;
        }
        return ans;
    }
};