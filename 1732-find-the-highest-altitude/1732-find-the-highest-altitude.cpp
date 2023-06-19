class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int maxsum = INT_MIN;
         // maxsum = max(maxsum,sum);
        for(auto i : gain){
            maxsum = max(maxsum,sum);
            sum += i;
        }
         maxsum = max(maxsum,sum);
        return maxsum;
    }
};