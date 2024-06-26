/**
 * @param {number[]} seats
 * @param {number[]} students
 * @return {number}
 */
var minMovesToSeat = function(seats, students) {
    
    seats.sort((a,b) => a - b);
    students.sort((a,b) => a - b);
    
    let ans = 0;
    
    seats.map((s,i) =>{
        
        ans += Math.abs(s-students[i]);
    })
    
    return ans;
};