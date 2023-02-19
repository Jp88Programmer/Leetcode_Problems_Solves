function mergeArrays(nums1: number[][], nums2: number[][]): number[][] {
    let map = {};
    let res = [];
    
    nums1.forEach((arr)=>{
        map[arr[0]] = map[arr[0]] ? map[arr[0]] + arr[1] : arr[1];
    })
    nums2.forEach((arr)=>{
        map[arr[0]] = map[arr[0]] ? map[arr[0]] + arr[1] : arr[1];
    })
    
    Object.keys(map).map((key)=>{
        res.push([key,map[key]])
    })
    return res;
};