type MultiDimensionalArray = (number | MultiDimensionalArray)[];

var flat = function (arr:  MultiDimensionalArray, n: number):  MultiDimensionalArray {
    let i = 0;
    function flatternarr(arr,i,n){
        if(i === n){
            return arr;
        }
        let ans = [];
        i++;
        arr.map(e => {
            if(Array.isArray(e)){
                ans.push(...flatternarr(e,i,n));
            }else{
                ans.push(e);
            }
        })
        return ans;
    }
    return flatternarr(arr,i,n);
};