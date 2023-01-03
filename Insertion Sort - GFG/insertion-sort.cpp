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

/* Function to print an array */
function printArray(arr, size) {
  let i;
  let s = "";
  for (i = 0; i < size; i++) {
    if(arr[i] === -0)
      arr[i] = 0;
    s += arr[i] + " ";
  }
  console.log(s);
}

function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let n = parseInt(readLine());
    let arr = new Array(n);
    let input_line = readLine().split(" ").map((x) => parseInt(x));
    for(let j = 0;j<n;j++) arr[j] = input_line[j];
    let obj = new Solution();
    obj.insertionSort(arr,n);
    printArray(arr,arr.length);
  }
}
// } Driver Code Ends


//User function Template for javascript

/**
 *
 * insert
 * @param {number[]} arr
 * @param {number} i
 *
 * insertionSort
 * @param {number[]} arr
 * @param {number} n
 */
class Solution
{
  insert(arr,i){
     // code here such that insertionSort() sorts arr[]
     
     let id = i - 1,t = arr[i];
     
     while(id >= 0  && arr[id] > t){
         arr[id+1] = arr[id];
         id--;
     }
     return id;
     
  }

   //Function to sort the array using insertion sort algorithm.
  insertionSort(arr,n){
   //code here
   for(let i = 1; i<n; i++){
       let t = arr[i];
       let id = this.insert(arr,i);
       arr[id+1] = t;
   }
  }
    
}