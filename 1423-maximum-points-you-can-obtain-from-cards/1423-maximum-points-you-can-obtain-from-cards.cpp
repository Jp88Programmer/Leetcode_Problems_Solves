class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        
        int n = c.size();
        int ws = n - k;
        int wsum = 0,sum = 0;
        for(int i = 0; i<n; i++) sum += c[i];
        for(int i =0; i<ws; i++)
            wsum += c[i];
        
        int ans = 0;
        ans = max(ans,sum - wsum);
        int j = 0;
        for(int i = ws; i<n; i++){
            wsum = wsum + c[i] - c[j++];
            ans = max(ans,sum - wsum);
        }
        return ans;
    }
};