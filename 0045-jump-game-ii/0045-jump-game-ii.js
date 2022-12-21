/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(arr) {
     let place = 0,count = 0,end = 0;
        if(arr[0] == 0 && arr.length > 1) return -1;
        for(let i = 0; i<arr.length - 1; i++){
            
            place = Math.max(place,i + arr[i]);
            if(i == end){
                end = place;
                count++;
            }
        }
        
        if(end < arr.length - 1) return -1;
        return count ;
};