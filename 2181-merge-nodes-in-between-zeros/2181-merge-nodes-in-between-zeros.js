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
    let node = null, t = node;
    
    let temp = head.next,sum = 0;
    
    while(temp){
        if(temp.val == 0){
            let list = new ListNode(sum);
            if(!node){
                t = list;
                node = t;
            }else{
                t.next = list;
                t = t.next;
            }
            sum = 0;
            
        }else{
            sum += temp.val;
        }
        temp = temp.next;
    }
    console.log(node,t)
    return node;
};