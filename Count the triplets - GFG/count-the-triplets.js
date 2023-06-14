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
        let n = parseInt(readLine()); 
        let arr = readLine().trim().split(" ").map((x) => parseInt(x)); 
        let obj = new Solution();
        let res = obj.countTriplet(arr,n);
        console.log(res);
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @return {number}
*/

class Solution {
    
    countTriplet(arr,n){
       //code here
       const map = new Map();
       
       arr.map((e)=>{
           map.set(e,map.has(e)?map.get(e)+1:1);
       })
       let count = 0;
       for(let i = 0; i<arr.length; i++){
           for(let j = i+1; j<arr.length; j++){
               if(map.has(arr[i]+arr[j]))
                count++;
           }
       }
       return count; 
    }
}