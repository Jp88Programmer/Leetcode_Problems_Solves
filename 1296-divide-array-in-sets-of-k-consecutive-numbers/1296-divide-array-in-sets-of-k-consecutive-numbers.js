/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var isPossibleDivide = function(nums, k) {
    
    const m = new Map();
    
    nums.forEach((ele)=>{
        if(m.has(ele)){
            m.set(ele,m.get(ele)+1);
        }else{
            m.set(ele,1);
        }
    });
    
    const sortMap = new Map([...m.entries()].sort((a,b)=> a[0] - b[0]));
    
    for(let [x,fr] of sortMap){
        
        if(fr > 0){
            
            // for(let i = 0; i<k; i++){
            for(let i = k - 1; i >= 0; i--){
                let [next,nextFr] = [x+i,sortMap.get(x+i)];
                
                if(!nextFr || nextFr < fr) return false;
                
                sortMap.set(next,sortMap.get(next) - fr);
                
                
                // if(sortMap.get(x+i) < 0) return false;
                
            }
        }
    }
    
    
    return true;
};