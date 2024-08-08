class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int sum = 0,n = arr.size(),j = 0,ans = 0;
        
        for(int i = 0;i<k; i++){
            sum += arr[i];
        }
        
        if((sum / k) >= threshold)
            ans++;
        
        for(int i = k; i<n; i++){
            sum = sum + arr[i] - arr[j++];
            if((sum / k) >= threshold)
                ans++;
        }
        return ans;
    }
};