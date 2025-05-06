function fun(nums: number[], k: number) : number {

    const map = new Map();
    let count = 0,j = 0;

    if(k < 0)
        return count;

    for(let i = 0; i<nums.length; i++){
        map.set(nums[i],map.has(nums[i]) ? map.get(nums[i]) + 1 : 1);
        while(map.size > k){
            map.set(nums[j],map.get(nums[j]) - 1);
            if(map.get(nums[j]) == 0)
                map.delete(nums[j]);
            j++;
        }
        count += (i - j + 1);
    }
    return count;
 }
function subarraysWithKDistinct(nums: number[], k: number): number {
    return fun(nums,k) - fun(nums,k-1);
};