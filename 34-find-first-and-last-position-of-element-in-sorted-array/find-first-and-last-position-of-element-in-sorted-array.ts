function binarySearch(nums: number[],target:number): number{
    let s = 0;
    let e = nums.length-1;
    
    while(s<=e){
        let m = Math.floor(s + (e - s)/2);
        if(nums[m] == target) return m;
        else if(nums[m] < target) s = m + 1;
        else e = m - 1;
    }
    
    return -1;
}
function searchRange(nums: number[], target: number): number[] {
    
    let id = binarySearch(nums,target);
    if(id == -1) return [-1,-1];
    
    let s = id,e = id;
    
    while(s>=0 && nums[s] == nums[id]) s--;
    while(e<nums.length && nums[e] == nums[id]) e++;
    
    return [++s,--e];
};