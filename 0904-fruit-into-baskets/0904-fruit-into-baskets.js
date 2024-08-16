/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    
    const map = new Map();
    let ans = 0;
    let sum = 0,j = 0;
    
    fruits.map((fruit,i) => {
        map.set(fruit,map.has(fruit) ? map.get(fruit) + 1 : 1);
        while(map.size > 2){    
            if(map.get(fruits[j]) == 1){
                map.delete(fruits[j]);
            }else{
                map.set(fruits[j],map.get(fruits[j]) - 1);
            }
            j++;
        }
        ans = Math.max(ans,i - j + 1);
    })
    return ans;
    
};