function findKDistantIndices(nums: number[], key: number, k: number): number[] {
    
    let res = [],minMatchIndex = 0;

    for(let i = 0; i<nums.length; i++){
        if(nums[i] == key){
            let l = Math.max(minMatchIndex,i-k);
            minMatchIndex = Math.min(nums.length-1,i+k) + 1;
            for(let j = l ; j<minMatchIndex; j++){
                res.push(j);
            }
        }
    }

    return res;
};