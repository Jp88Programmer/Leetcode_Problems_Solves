/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var pairSum = function(head) {
    
    let list = [];
    
    while(head){
        list.push(head.val);
        head = head.next;
    }
    
    let maxsum = 0;
    
    for(let i = 0; i<list.length/2; i++){
        let sum = 0;
        sum += list[i] + list[list.length-1-i];
        maxsum = Math.max(maxsum,sum); 
    }
    return maxsum;
};