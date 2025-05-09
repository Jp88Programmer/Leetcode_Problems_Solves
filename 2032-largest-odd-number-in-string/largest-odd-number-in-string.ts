function largestOddNumber(num: string): string {
    let i = 0;
    for(i = num.length - 1; i>=0; i--)
        if(parseInt(num[i]) % 2 != 0) break;
    return num.substr(0,i+1);
};