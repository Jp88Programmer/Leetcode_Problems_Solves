/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {number} a
 * @param {number} b
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeInBetween = function(list1, a, b, list2) {
    let count = 1;
    let firstjoin = null,lastjoin = null;
    let temp = list1;
    while(count <= b && temp){
        if(count == a)
            firstjoin = temp;
        count++;
        temp = temp.next;
    }
    lastjoin = temp.next;
    firstjoin.next = list2;
    while(list2.next){
        list2 = list2.next;
    }
    list2.next = lastjoin;
    return list1;
};