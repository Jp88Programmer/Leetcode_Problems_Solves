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
        let str = readLine();
        let obj = new Solution();
        let res = obj.isBinary(str);
        if(res === true){
            console.log(1);
        }
        else{
            console.log(0);
        }
        
    }
}// } Driver Code Ends

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {string} str
 * @returns {boolean}
*/

class Solution{
    isBinary(str){
        //code here
        for(let s of str){
            if(s !== '1' && s !== '0') return false;
        }
        
        return true;
    }
}
