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
        let arr = readLine().split(' ').map(x=>parseInt(x));
        let m = parseInt(readLine());
        let obj = new Solution();
        console.log(obj.findZeroes(arr, n, m));
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @param {number} m
 * @return {integer}
 */
class Solution {
    findZeroes(nums,nu,k) {
        // code here
        let j = 0,ans = 0,zero = 0;
        nums.map((n,i)=>{
            if(n == 0) zero++;
            while(zero > k){
                if(nums[j] == 0){
                    zero--;
                }
                j++;
            }
            ans = Math.max(ans,i-j+1);
        })
    return ans;
    }
}