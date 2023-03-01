class Solution {
public:
    void heapify(vector<int>&arr,int n,int i){
        
        if(i >= n) return ;
        
        int id = i;
        
        int l = 2 * id + 1;
        int r = 2 * id + 2;
        
        if(l < n && arr[id] > arr[l])
            id = l;
        
        if(r < n && arr[id] > arr[r])
            id = r;
        
        if(id != i){
            swap(arr[id],arr[i]);
            heapify(arr,n,id);
        }
        
    }
    vector<int> sortArray(vector<int>& nums) {
        
        /*
        int n = nums.size();
        vector<int>ans;
        for(int i = n/2; i>=0; i--)
            heapify(nums,n,i);
        
        int len =n;
        for(int i = 0; i<n; i++){
            
            ans.push_back(nums[0]);
            // swap(nums[0],nums[len-1]);
            nums[0] = nums[len-1];
            len--;
            heapify(nums,len,0);
        }
        
        return ans;
        */
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto e : nums){
            pq.push(e);
        }
        
        nums.clear();
        while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
        }
        return nums;
    }
};