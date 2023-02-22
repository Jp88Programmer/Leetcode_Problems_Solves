class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
     
        int left = *max_element(w.begin(),w.end());
        int right = accumulate(w.begin(),w.end(),0);
        
        while(left < right){
            int mid = (left + right)>>1;
            int need = 1;
            int curr = 0;
            
            for(auto i : w){
                if(curr + i > mid)
                {
                    curr = 0;
                    need++;
                }
                curr += i;
            }
            
            if(need > d) left = mid + 1;
            else
                right = mid ;
        }
        
        return left;
    }
};