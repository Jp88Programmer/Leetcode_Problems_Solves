function minCapability(nums: number[], k: number): number {
    
    
    let left : number = 1,right : number = 1e9;
    let n : number = nums.length;
    while(left < right){
        let mid:number = Math.floor(left + (right - left)/2);
        let take:number = 0;
        for(let i = 0; i<n; i++){
            if(nums[i] <= mid){
                take++;
                i++;
            }
        }
        
        if(take >= k){
            right = mid ;
        }else
            left = mid + 1;
    }
    
    return left;
};