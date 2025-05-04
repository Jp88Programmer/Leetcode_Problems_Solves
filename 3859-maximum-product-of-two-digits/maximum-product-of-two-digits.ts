function maxProduct(n: number): number {
    let strArr = n.toString().split("")
    strArr.sort((a:string,b:string) => Number(b) - Number(a))
    return Number(strArr[0]) * Number(strArr[1]);
};