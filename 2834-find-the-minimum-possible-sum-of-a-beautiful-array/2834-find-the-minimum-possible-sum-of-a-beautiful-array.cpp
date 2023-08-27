class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        
        set<int>s;
        for(int i = 1; s.size() < n; i++){
            if(s.find(target-i) == s.end())
                s.insert(i);
        }
        long long sum = 0;
        for(auto i : s)
            sum += i;
        return sum ;
        
    }
};