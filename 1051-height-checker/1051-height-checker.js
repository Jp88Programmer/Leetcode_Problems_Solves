/**
 * @param {number[]} heights
 * @return {number}
 */
var heightChecker = function(heights) {
    
    let expected = [...heights];
    heights.sort((a,b) => a - b);
    let count = 0;
    heights.map((height,index) => {
        if(expected[index] != height)
            count++;
    })
    return count;
};