function containsDuplicate(nums: number[]): boolean {
    let obj = {};
    for(let i = 0; i<nums.length ; i++){
        let num = nums[i];
        if(obj[num]){
            return true;
        }else{
            obj[num] = 1;
        }
    }
    return false;
};