class Solution {
public:
    // make the compare function to use with pair
    static bool comp(pair<int,int>a, pair<int,int>b){
        if(a.second > b.second) return true;
        else if(a.second == b.second){
            if(a.first < b.first) return true;
        }
        return false;
    }
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto i : s) m[i]++;
        
        vector<pair<char,int>>v;

        for(auto x:m) v.push_back({x.first,x.second});
        
        //sort the array
        sort(v.begin(),v.end(),comp);
        
        string res = "";
        for(auto p : v){
            int fr = p.second;
            while(fr--) res += p.first;
        }
        return res;   
    }
};