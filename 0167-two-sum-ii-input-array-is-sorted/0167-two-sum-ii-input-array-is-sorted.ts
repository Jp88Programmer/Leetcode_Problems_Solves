function twoSum(numbers: number[], target: number): number[] {
    let s = 0,e = numbers.length-1;
    while(s < e){
        let sum = numbers[s]+numbers[e];
        if(sum == target){
            return [s+1,e+1];
        }else if(sum > target){
            e--;
        }else
            s++;
    }
    return [-1,-1]
};