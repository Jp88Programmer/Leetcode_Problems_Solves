function generate(numRows: number): number[][] {
     if(numRows == 1){
        return [[1]];
    }
    if(numRows == 2){
        return [[1],[1,1]];
    }

    let res = [[1],[1,1]];

    let itr = numRows - 2;

    while(itr > 0){
        let arr = [1];
        let last = res[res.length-1];
        for(let i = 0; i<last.length - 1; i++){
            let sum = last[i] + last[i+1];
            arr.push(sum);
        }
        arr.push(1);
        res.push(arr);
        itr--;
    }
    return res;
};