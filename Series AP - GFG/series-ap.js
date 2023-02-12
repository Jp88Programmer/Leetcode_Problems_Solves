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
        let A1 = input_ar1[0];
        let A2 = input_ar1[1];
        let N = input_ar1[2];
        let obj = new Solution();
        let res = obj.nthTermOfAP(A1, A2, N);
        console.log(res);
        
    }
}// } Driver Code Ends





// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} A1
 * @param {number} A2
 * @param {number} N
 * @returns {number}
*/

class Solution{
    nthTermOfAP(A1, A2, N){
        //code here
        let d = A2-A1;
        return A1 + (N - 1)*d;
    }
}
