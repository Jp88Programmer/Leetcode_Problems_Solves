/**
 * @param {number[]} nums
 * @return {number}
 */
var countPartitions = function(nums) {
    let prefixSum = [];

    let totalSum = nums.reduce((sum,num) => {
        sum += num;
        prefixSum.push(sum);
        return sum;
    },0);

    let partition = 0;
    for(let i = 0; i<prefixSum.length - 1; i++){

        let diff = prefixSum[i] - (totalSum - prefixSum[i]);

        if(diff % 2 == 0){
            partition++;
        }
    }

    return partition;
};