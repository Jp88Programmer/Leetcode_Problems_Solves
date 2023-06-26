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
        let arr = new Array(n);
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            arr[i] = input_ar1[i];
        let obj = new Solution();
        console.log(obj.majorityElement(arr, n));
        
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} a
 * @param {number} size
 * @returns {number}
*/

class Solution {
    
    majorityElement(nums, size)
    {
         let ans;
        let count = 0;
        
        for(let i = 0; i<nums.length; i++){
            if(count ==  0){
                ans = nums[i];
                count++;
            }else if(nums[i] == ans){
                count++;
            }else{
                count--;
            }
        }
        
        let count1 = 0;
        
        for(let i = 0; i<nums.length; i++){
            if(nums[i] == ans){
                count1++;
            }
        }
        
        if(count1 > nums.length/2)
            return ans;
        else
            return -1;
    
    }
}