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
        let A = input_ar1[0];
        let B = input_ar1[1];
        let obj = new Solution();
        let res = obj.gcd(A, B);
        console.log(res);
        
    }
}// } Driver Code Ends


// } Driver Code Ends


//User function Template for javascript


/**
 * @param {number} A
 * @param {number} B
 * @returns {number}
*/

class Solution{
    gcd(a, b){
        //code here
        if(parseInt(a%b)==0) return b;
	    return this.gcd(b,parseInt(a%b));
    }
}

