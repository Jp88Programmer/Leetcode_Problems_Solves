class Solution {
public:
    int minimumSum(int n, int k) {
      
        unordered_set<int>s;
        int ans = 0;
        for(int i = 1; s.size() < n; i++){
            if(s.find(k - i) == s.end()){
                ans += i;
                s.insert(i);
            }
        }
        return ans;
    }
};