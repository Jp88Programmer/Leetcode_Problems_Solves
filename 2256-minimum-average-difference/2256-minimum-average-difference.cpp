class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        /*
        if(nums.size() == 1){
            return 0;
        }
        
        long long int sum = accumulate(nums.begin(),nums.end(),0);
        
        int j = 1;
        int n = nums.size();
        long long int sum1 = 0;
        long long int ans = 0;
        long long int res = INT_MAX;
        int id = -1;
        for(int i = 0; i<nums.size(); i++){
            
            sum1 += (long)nums[i];
            long long int avg = 0;
            if(sum - sum1 == 0){
                // ans = sum / n;
                avg = 0;
                // break;
            }else
                avg = ((sum - sum1)) / (n - j);
            
            ans = (sum1/j) - avg;
            ans = abs(ans);
            if(res > ans){
                res = ans;
                id = i;
            }
            j++;
        }
        
        
        // res = min(res,abs(ans));
//         if(res > ans){
//             id = n - 1;
//         }
        
        return id;
        */
        
        /*
          int n=nums.size();
    if(n==1)    return 0;
    long long pre[n]; //to store prefix sum
    pre[0]=nums[0];
	
	//calculating prefix sum
    for(int i=1;i<n;i++)    pre[i]=pre[i-1]+nums[i];
	
    long long res=INT_MAX;
    int ind=0;
	
	// calculating minimum average for i=0 to i=n-2
    for(int i=1;i<n;i++) {
        int k=(abs(pre[i-1]/i-(pre[n-1]-pre[i-1])/(n-i)));
        if(res>k){
            res=k;
            ind=i-1;
        }
    }
	
	//special case for i=n-1
    if(res>abs(pre[n-1]/n)){
        res=abs(pre[n-1]/n);
        ind=n-1;
    }
    return ind;
    */
        
        int n = nums.size(),id = 0;
        
        if(n == 1) return 0;
        long long res = INT_MAX;
        
        long long presum[n];
        
        presum[0] = nums[0];
        
        for(int i = 1; i< n ; i++){
            presum[i] = presum[i-1] + nums[i];
        }
        
        for(int i = 1; i<n; i++){
            int k =abs((presum[i-1]/i) - ((presum[n-1] - presum[i-1]) / (n - i)));
            if(res > k){
                res = k;
                id = i-1;
            }
        }
        
        if(res > abs(presum[n-1]/n)){
            id = n - 1;
        }
        
        return id;
    }
};