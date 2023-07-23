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

class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
}

function printlist(head){
    let current = head; 
    let s='';
    while (current !== null)
    {
        s+=current.data+" ";
        current = current.next;
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        let head = new Node(input_ar1[0]);
        let tail = head;
        for(let i=1;i<n;i++){
            tail.next = new Node(input_ar1[i]);
            tail = tail.next;
        }
        let obj = new Solution();
        head = obj.segregate(head);
        printlist(head);
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {Node} head
 * @returns {Node}
*/

/*
class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    //Function to sort a linked list of 0s, 1s and 2s.
    segregate(head)
    {
        //your code here
        let arr = [];
        let temp = head;
        while(temp){
            arr.push(temp.data);
            temp=temp.next;
        }
        let o = 0,t=arr.length-1;
        for(let i =0;  i <= t; ){
            if(arr[i] == 0){
                [arr[i],arr[o]] = [arr[o],arr[i]];
                o++;
                i++;
            }
            else if(arr[i] == 2){
                [arr[i],arr[t]] = [arr[t],arr[i]];
                t--;
            }else{
                i++;
            }
        }
        
        arr.map(e => {
            if(!temp){
                temp = new Node(e);
                head = temp;
            }else{
                let p = new Node(e);
                temp.next = p;
                temp = temp.next
            }
        })
        return head;
        
        
        
    }
}