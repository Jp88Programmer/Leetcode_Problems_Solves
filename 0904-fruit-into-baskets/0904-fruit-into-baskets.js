/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    
    let map = new Map();
    
    let j = 0,i = 0,ans = 0;
    for( i = 0; i<fruits.length; i++){
        let fruit = fruits[i];
        map.set(fruit,map.has(fruit)?map.get(fruit) + 1:1);
        while(map.size > 2){
            if(map.get(fruits[j]) == 1){
                map.delete(fruits[j]);
            }else{
                
            map.set(fruits[j],map.get(fruits[j]) - 1);
            }
            j++;
        }
        ans = Math.max(ans,i - j + 1);
    }
    return ans ;
    
};