//{ Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}
function printArray(res) {
    if(res.length === 0) return;
    let s = "";
    for(let i = 0;i<res.length;i++) {
        s+=res[i];
        s+=" ";
    }
    console.log(s);
} 
function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let N = parseInt(readLine());
    let obj = new Solution();
    let res = obj.getTable(N);
    
    printArray(res);
  }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} N
 * @return {number[]}
 */
class Solution {
  getTable(N) {
    //code here
    let i = 1;
    let res = [];
    while(i<=10){
        res.push(N*i);
        i++;
    }
    return res;
  }
}