/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let n1 = m -1, n2 = n-1, r = m + n - 1;

    while(n1 >= 0 && n2 >= 0){
        if(nums1[n1] < nums2[n2]){
            nums1[r--] = nums2[n2--];
        }else{
            nums1[r--] = nums1[n1--];
        }
    }

    while(n2 >= 0 && r >= 0){
        nums1[r--] = nums2[n2--];
    }

    
};