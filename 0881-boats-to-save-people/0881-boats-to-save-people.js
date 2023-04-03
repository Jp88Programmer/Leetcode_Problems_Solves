/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function(people, limit) {
    
    people.sort((a,b)=> a - b)
    let sum = 0,count = 0;
    let v = new Array(people.length).fill(false);
    let s = 0,e = people.length-1;
    let flag = 0;
    while(s < e){
        
        if(people[s] + people[e] <= limit){
            count++;
            v[s] = true;
            v[e] = true;
            s++;
            e--;
        }
        else if(people[e] <= limit){
            v[e] = true;
            e--;
            count++;
        }else if(people[s] <= limit){
            v[s] = true;
            s++;
            count++;
        }
    }
    
    if(s == e && people[s] <= limit){
        count++;
        v[s] = true;
    }
    
    if(!v[s] && people[s] <= limit){
        count++;
        v[s] = true;
    }
    
    if(!v[e] && people[e] <= limit){
        count++;
        v[e] = true;
    }
    
    // count++;
//     for(let i = 0; i<people.length; i++){
        
//         if(sum + people[i] <= limit){
//             sum += people[i];
//         }else{
//             sum = 0;
//             count++;
//             i--;
//         }
//     }
    
//     if(sum > 0){
//         count++;
//     }
    
    return count;
};