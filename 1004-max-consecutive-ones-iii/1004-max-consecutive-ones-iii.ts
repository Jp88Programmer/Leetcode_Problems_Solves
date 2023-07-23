function longestOnes(nums: number[], k: number): number {
     let j = 0,ans = 0,zero = 0;
        nums.map((n,i)=>{
            if(n == 0) zero++;
            while(zero > k){
                if(nums[j] == 0){
                    zero--;
                }
                j++;
            }
            ans = Math.max(ans,i-j+1);
        })
    return ans;
};