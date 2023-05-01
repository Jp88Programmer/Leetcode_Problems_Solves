function average(salary: number[]): number {
     const [minVal,maxVal] = [Math.min(...salary),Math.max(...salary)]
    const res = salary.filter(s => s !== minVal && s !== maxVal).reduce((e,acc)=> e + acc,0) / (salary.length - 2);
    return res;
};