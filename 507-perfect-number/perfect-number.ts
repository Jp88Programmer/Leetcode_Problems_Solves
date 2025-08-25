function checkPerfectNumber(num: number): boolean {
    
    if(num == 1) return false;
    
    let divisor = [];

    for(let i = 1; i<= Math.sqrt(num); i++){
        if(num % i == 0){
            divisor.push(i);
            if(i != 1 && Math.floor(num/i) != i)
                divisor.push(Math.floor(num/i));
        }
    }

    console.log(divisor);

    return num == divisor.reduce((sum,d) => sum + d,0);

};