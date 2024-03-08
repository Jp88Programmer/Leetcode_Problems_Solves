class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> cnt;
        for (int num : nums) ++cnt[num];
        int mx = 0;
        for (auto [num, c] : cnt) mx = max(mx, c);
        int ans = 0;
        for (auto [num, c] : cnt) 
            if (c == mx) ans += c;
        return ans;
    }
};