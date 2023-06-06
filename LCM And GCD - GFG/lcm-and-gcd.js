//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function printList(res,n){
    let s="";
    for(let i=0;i<n;i++){
        s+=res[i];
        s+=" ";
    }
    console.log(s);
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        let a = input_ar1[0];
        let b = input_ar1[1];
        let obj = new Solution();
        let res = obj.lcmAndGcd(a, b);
        if(res && res.length == 2)
            console.log(res[0] + " " + res[1]);
        
    }
}// } Driver Code Ends



// } Driver Code Ends


//User function Template for javascript


/**
 * @param {number} a
 * @param {number} b
 * @returns {number[]}
*/

class Solution{
    lcmAndGcd(a, b){
        //code here
         const gcd = function(a,b){
           if(a%b == 0) return b;
           return gcd(b%a,a);
        }
        const g = gcd(a,b);
        return [(a*b)/g,g];
    }
}
