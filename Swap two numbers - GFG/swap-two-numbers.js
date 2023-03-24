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


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let [a,b] = readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res = obj.get(a,b);
        console.log(res[0] + " " + res[1]);
    }
}
// } Driver Code Ends


//User function Template for javascript


/**
 * @param {number} a
 * @param {number} b
 * @return {number[]}
*/

class Solution {
    get(a,b){
       //code here
       return[b,a]
    }
}
