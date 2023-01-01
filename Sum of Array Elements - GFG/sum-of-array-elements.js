//{ Driver Code Starts
//Initial Template for javascript

"use strict";
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
        let N,X;
        N = parseInt(readLine());
        let arr = readLine().split(' ').map(x=>parseInt(x));
        let obj = new Solution();
        console.log(obj.sumElement(arr, N));
    }
}

// } Driver Code Ends


//User function Template for javascript

class Solution {
  sumElement(arr,n) {
      // code here
      
      let sum = arr.reduce((acc,e) => acc + e);
      
      return sum ;
  }
}