function ThreeSum(nums : number[],start: number,end: number,target: number,ans: number[][]){
    let num1 = nums[start];
    for(let i = start+1; i <= end; i++){
        let num2 = nums[i];
        let sum = target - num2;
        let left = i+1,right = end;
        if(i == start+1 || nums[i] != nums[i-1]){
            while(left < right){
                if(nums[left] + nums[right] < sum)
                    left++;
                else if(nums[left] + nums[right] > sum)
                    right--;
                else{
                    let arr = [num1,num2,nums[left],nums[right]];
                    ans.push(arr);
                    
                    while(left < right && nums[left] == nums[left+1])
                        left++;
                    while(left < right && nums[right] == nums[right-1])
                        right--;
                    
                    left++;
                    right--;
                }
            }
        }
    }
}
function fourSum(nums: number[], target: number): number[][] {
    let ans = []
    nums.sort((a,b) => a - b);
    for(let i = 0; i<nums.length; i++){
        if(i == 0 || nums[i] != nums[i-1])
            ThreeSum(nums,i,nums.length-1,target-nums[i],ans);
    }
    return ans;
};