class Solution {
    public int threeSumClosest(int[] nums, int target) {
    /*
    Arrays.sort(nums);
    int minDiff = Integer.MAX_VALUE;
    int closestSum = 0;
    for(int i = 0; i < nums.length; i++) {
      int lo = i + 1,
          hi = nums.length - 1;
      // lo < high vs lo <= high b/c we can't reuse the same index
      while(lo < hi) {
        int sum = nums[i] + nums[lo] + nums[hi];
        // we need to know the differences distance from zero
        // rather than the distance from each other
        int diff = Math.abs(target - sum);
        if(diff < minDiff) {
          minDiff = diff;
          closestSum = sum;
        }
        if(sum == target) {
          return closestSum;
        } else if(sum < target) {
          ++lo;
        } else {
          --hi;
        }
      }
    }
    
    return closestSum;
    
    */
        
        Arrays.sort(nums);
        int maxSum = 0;
        int diff = Integer.MAX_VALUE;
        for(int i=0; i<nums.length; i++){
            
            int start = i+1;
            int end = nums.length-1;
            
            
            while(start < end){
                
                int sum = nums[i]+nums[start]+nums[end];
                int d = Math.abs(target-sum);
                if(d < diff){
                    diff = d;
                    maxSum = sum;
                }
                
                if(sum == target) return maxSum;
                else if(sum < target){
                    start++;
                    
                }else{
                    end--;
                }
                
            }
            
        }
        return maxSum;
        
    }
}