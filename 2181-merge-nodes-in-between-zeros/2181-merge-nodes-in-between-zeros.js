/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var mergeNodes = function(head) {
    let temp = head.next,zero = head,sum = 0;
    while(temp){
        if(temp.val == 0){
            zero.val = sum;
            sum = 0;
            zero.next = temp;
            if(!temp.next){
                zero.next = null;
            }
            zero = temp;
        }else{
            sum += temp.val;
        }
        temp = temp.next;
    }
    return head;
};