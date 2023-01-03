/**
 * @param {string[]} strs
 * @return {number}
 */
var minDeletionSize = function(strs) {
    
    let count = 0;
    const arr = [];
        for(let j = 0; j < strs[0].length; j++){
            let str = "";
    for(let i = 0; i<strs.length; i++){
        
        
            
            console.log(i,j);
            str += strs[i][j];
            
            
        }
        
        arr.push(str);
        
        
    }
    
    console.log(arr);
    
    for(let i = 0; i<arr.length; i++){
        
        for(let j = 0; j<arr[i].length-1; j++){
            
            if(arr[i][j] > arr[i][j+1]){
                count++;
                break;
            }
        }
    }
    
    
    return count;
};