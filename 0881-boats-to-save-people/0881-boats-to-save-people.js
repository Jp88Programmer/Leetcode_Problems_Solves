/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function(people, limit) {
    
    people.sort((a,b)=> a - b)
    let s = 0,e = people.length-1;
    let count  = 0;
    while(s <= e){
        if(people[s] + people[e] <= limit){
            s++;
            e--;
            count++;
        }
        else{
            e--;
            count++;
        } 
    }
    return count ;
};