class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        //method 1;
        int l = 0;
        int r = arr.size();
        
        while(l < r){
            int mid = (l + r)>>1;
            
            if(arr[mid]-1-mid < k)
                l = mid + 1;
            else
                r = mid ;
        }
        
        return l + k;
        
        
        /*
         int i=0, number=1;
        while(i<arr.size() && k>0) {
            if(arr[i]==number) i++;
            else k--;
            number++;
        }
        if(k==0) return number-1;
        return number-1 + arr.size()-i + k;
        */
    }
};