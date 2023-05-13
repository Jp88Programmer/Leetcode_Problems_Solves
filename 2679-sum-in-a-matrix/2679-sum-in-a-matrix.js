/**
 * @param {number[][]} nums
 * @return {number}
 */
var matrixSum = function(nums) {
    
    let score = 0,k = 0;
    while(k < nums[0].length){
        let ans = 0;
        for(let i = 0; i<nums.length; i++){
        
            let maxnum = -1;
            let index = 0;
            for(let j = 0; j<nums[i].length; j++){

                if(nums[i][j] > maxnum){
                    maxnum = nums[i][j];
                    index = j;
                }
            }
            nums[i][index] = -1;
            ans = Math.max(ans,maxnum);
        }
        score += ans;
        k++;
    }
    return score
};