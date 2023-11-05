class Solution {
    public List<List<Integer>> list = new ArrayList<>();
    public void twoSum(int id,int[] nums){
        
        int a = nums[id-1];
        
        int start = id;
        int end = nums.length-1;
        
        while(start < end){
            
            int sum = a + nums[start] + nums[end];
            
            if(sum < 0){
                start++;
            }else if(sum > 0){
                end--;
            }else{
                
                List<Integer>list1 = new ArrayList<Integer>();
                list1.add(a);
                list1.add(nums[start]);
                list1.add(nums[end]);
                
                list.add(new ArrayList<>(list1));
                
                while(start < end && nums[start] == nums[start+1]) start++;
                
                while(start < end && nums[end] == nums[end-1]) end--;
                
                start++;
                end--;
            }
        } 
    }
    public List<List<Integer>> threeSum(int[] nums) {
        
        
        // list = new ArrayLis
        
        Arrays.sort(nums);
        
        for(int i = 0 ; i<nums.length ; i++){
            
            if(i == 0 || nums[i] != nums[i-1]){
                twoSum(i+1,nums);
            }
        }
        
        return list;
            
            
    }
}