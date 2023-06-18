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
        let n;
        n = parseInt(readLine());
        let arr = readLine().split(' ').map(x=>parseInt(x));
        let obj = new Solution();
        console.log(obj.findKRotation(arr, n));
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @return {integer}
 */
class Solution {
    findKRotation(nums,n) {
        // code here 
        
       let s = 0,e = nums.length - 1;
    
    while(s < e){
        
        if(nums[s] < nums[e]) return s;
        
        let mid = s + Math.floor((e - s)/2);
        
        if(nums[mid] >= nums[s]){
            s = mid + 1;
        }else{
            e = mid;
        }
    }
    return s;
    }
}