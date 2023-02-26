function leftRigthDifference(nums: number[]): number[] {
    
    let sum : number = nums.reduce((acc,num)=> acc + num);
    let leftSum : number = 0;
    let res : number[] = [];
    nums.map(e => {
        res.push(Math.abs(2*leftSum-sum+e));
        leftSum += e;
    })
    return res;
};