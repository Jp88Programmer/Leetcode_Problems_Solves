/**
 * @param {number[]} salary
 * @return {number}
 */
var average = function(salary) {
    
    const [minVal,maxVal] = [Math.min(...salary),Math.max(...salary)]
    console.log(minVal,maxVal)
    const res = salary.filter(s => s !== minVal && s !== maxVal).reduce((e,acc)=> e + acc,0) / (salary.length - 2);
    console.log(res);

    return res;
};