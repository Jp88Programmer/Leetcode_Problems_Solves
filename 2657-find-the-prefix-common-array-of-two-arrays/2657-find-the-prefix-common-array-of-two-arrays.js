/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number[]}
 */
var findThePrefixCommonArray = function(a, b) {
    
    let len = a.length;
    let ans = []
    for(let i = 0; i<len ; i++){
        
        if(i == 0){
           ans.push( a[i] === b[i] ? 1 : 0); 
        }else{
            
            let arr=[]
            for(let j = i; j >= 0; j--){
                
                for(let k = i ; k >= 0; k--){
                    if(a[j] == b[k])
                        arr.push(a[j]);
                }
                
            }
                console.log(arr);
                ans.push(arr.length);
        }
        
    }
    return ans;
};