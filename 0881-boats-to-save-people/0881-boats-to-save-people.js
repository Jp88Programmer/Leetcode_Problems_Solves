/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function(people, limit) {
    
    people.sort((a,b)=> b - a)
    let s = 0,e = people.length-1;
    while(s <= e){
        if(people[s] + people[e] <= limit){
            e--;
        }
        s++;
    }
    return s ;
};