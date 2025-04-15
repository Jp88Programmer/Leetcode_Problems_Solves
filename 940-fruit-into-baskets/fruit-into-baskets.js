/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    
    const map = new Map();
    let ans = 0;
    let j = 0;
    
    fruits.map((fruit,i) => {
        map.set(fruit,map.has(fruit) ? map.get(fruit) + 1 : 1);
        while(map.size > 2){
            map.set(fruits[j],map.get(fruits[j]) - 1);    
            if(map.get(fruits[j]) == 0){
                map.delete(fruits[j]);
            }
            j++;
        }
        ans = Math.max(ans,i - j + 1);
    })
    return ans;
    
};