class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        if(num == 0) return {-1,0,1};
        else if(num == 1 || num == 2) return {};
        else{
            long long mid = num/3;
            // vector<long long>ans;
            if(num % mid == 0 && (3 * mid) == num){
                return {mid-1,mid,mid+1};
            }
            return {};
        }
    }
};