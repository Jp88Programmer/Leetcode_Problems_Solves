function threeConsecutiveOdds(arr: number[]): boolean {
     let count = 0;
    for(let i = 0; i<arr.length; i++) {
        let a = arr[i];
        if(a % 2 != 0){
             if(count < 2){
                count++;
             }else if(count == 2){
                return true;
             }
        }else{
            count = 0;
        }
    };
    return false;
};