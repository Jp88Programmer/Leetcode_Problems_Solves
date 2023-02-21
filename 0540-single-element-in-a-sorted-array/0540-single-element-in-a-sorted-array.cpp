/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function(arr) {
    
    let n = arr.length;
    
    if(n == 1) return arr[n-1];
        
        let s = 0;
        let e = n - 2;
        
        while(s <= e){
            let m = (s + e) >> 1;
            if(arr[m] == arr[m^1])
                s = m + 1;
            else 
                e = m - 1;
            
        }
        
        return arr[s];
};