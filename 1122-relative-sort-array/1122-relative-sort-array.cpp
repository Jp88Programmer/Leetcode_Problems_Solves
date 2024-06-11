class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        for(auto i : arr1)
            m[i]++;
        
        vector<int>ans;
        for(int i = 0; i<arr2.size(); i++){
            while(m[arr2[i]]>0){
                ans.push_back(arr2[i]);
                m[arr2[i]]--;
                if(m[arr2[i]] == 0)
                    m.erase(arr2[i]);
            }
        }
        
        for(auto x : m){
            while(x.second > 0){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};