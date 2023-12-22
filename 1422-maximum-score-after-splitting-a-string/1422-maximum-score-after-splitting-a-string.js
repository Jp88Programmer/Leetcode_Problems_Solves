/**
 * @param {string} s
 * @return {number}
 */
var countScore = function(s,start,end,num){
    
    let countNum = 0;
    for(let i = start; i<=end; i++){
        if(s.charAt(i) == num)
            countNum++;
    }
    return countNum;
}
var maxScore = function(s) {
    
    let maxCount = 0;
    for(let i = 0; i<s.length; i++){
        if(i+1 < s.length){
            leftCount = countScore(s,0,i,'0');
            rightCount = countScore(s,i+1,s.length-1,'1');
            maxCount = Math.max(maxCount,leftCount+rightCount);
        }
    }
    return maxCount;
};