/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    
    let arr1 = [];
    let arr2 = [];
    
    while(l1){
        arr1.unshift(l1.val);
        l1 = l1.next;
    }
    
    while(l2){
        arr2.unshift(l2.val);
        l2 = l2.next;
    }
    let i = 0,j = 0;
    let arr = [];
    let carr = 0;
    while(i < arr1.length && j < arr2.length){
        let sum = (arr1[i]+arr2[j]+carr) % 10;
        carr =  Math.floor((arr1[i]+arr2[j]+carr) / 10);
        arr.push(sum);
        i++;
        j++;
    }
    while(i < arr1.length){
        let sum = (arr1[i]+carr) % 10;
        carr =  Math.floor((arr1[i]+carr) / 10);
        arr.push(sum);
        i++;
    }
    while(j < arr2.length){
        let sum = (arr2[j]+carr) % 10;
        carr =  Math.floor((arr2[j]+carr) / 10);
        arr.push(sum);
        j++;
    }
    if(carr > 0)
        arr.push(carr);
    let temp = null;
    let head = null;
    for(let i = arr.length-1; i>=0; i--){
        if(!temp){
            temp = new ListNode(arr[i]);
            head = temp
        }else{
            temp.next = new ListNode(arr[i]);
            temp = temp.next;
        }
    }
    return head ;
};