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
var gcd = function(a,b){
    if(a % b == 0) return b;
    return gcd(b,a%b);
}
var insertGreatestCommonDivisors = function(head) {
    if(!head.next){
            return head;
        }
        let f=head,s=head.next;
        while(s){
            let val = gcd(f.val,s.val);
            let t = new ListNode(val);
            t.next = s;
            f.next = t;
            s = s.next;
            f = t.next;
        }
        return head;
            
};