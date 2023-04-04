function partitionString(s: string): number {
    let arr = new Array(26).fill(0);
    let count = 0;
    for(let i = 0; i<s.length; i++){
        let n = s.charAt(i).charCodeAt(0) - 97;
        if(arr[n]===0){
            arr[n]++;
        }else{
            count++;
            arr.fill(0);
            i--;
        }
    }
    return count+1;
};