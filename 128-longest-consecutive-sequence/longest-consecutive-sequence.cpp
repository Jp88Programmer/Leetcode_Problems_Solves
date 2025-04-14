class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> v;
        for (auto se : s)
        {
            v.push_back(se);
        }

        map<int,int> pos, neg;

        for (auto val : v)
        {
            pos[val] = true;
        }

        int ans = 0, len = 0, prev = 0;
            for (auto x : pos)
            {
                if (x.second)
                {
                    if (x.first - prev == 1)
                    {
                        len++;
                    }
                    else
                    {
                        len = 1;
                    }
                prev = x.first;
                }
                ans = max(ans, len);
            }
        return ans;
    }
};