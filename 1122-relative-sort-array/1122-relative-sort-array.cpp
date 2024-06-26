class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        for(auto i : arr1) m[i]++;
        int pos = 0;
        for(auto i : arr2){
             while(m[i]-- >0)
                arr1[pos++] = i;
        }
        
        for(auto x : m){
            while(x.second-- > 0)
                arr1[pos++] = x.first;
        }
        return arr1;
    }
};