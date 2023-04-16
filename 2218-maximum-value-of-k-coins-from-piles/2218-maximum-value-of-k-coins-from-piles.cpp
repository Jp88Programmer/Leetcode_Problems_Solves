class Solution {
public:

    int dp[1001][2001] = {};
    int maxValueOfCoins(vector<vector<int>>& piles, int k,int i = 0) {
        if (i == piles.size() || k == 0)
        return 0;
    if (dp[i][k] == 0)
        for (int j = 0, sum = 0; j <= piles[i].size() && k - j >= 0; ++j) {
            dp[i][k] = max(dp[i][k], sum + maxValueOfCoins(piles, k - j, i + 1));
            if (j < piles[i].size())
                sum += piles[i][j];
        }
    return dp[i][k];
    }
};