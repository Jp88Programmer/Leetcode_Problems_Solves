/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    let m1 = 0,m2 = 0;
    nums.map(num => {
        if(num > m1){
            m2 = m1;
            m1 = num; 
        }
        else if(num > m2){
            m2 = num;
        }
    })
    console.log(m1,m2)
    return (m2 -1 )* (m1 - 1);
};