class Solution {
public:
    int search(vector<int>& v, int t) {
       int s = 0,e = v.size()-1;
        int ans = -1;
        
        while(s<=e){
            int mid = s + (e - s)/2;
            if(v[mid] == t)
                return mid;
            
            if(v[s] <= v[mid]){
                if(v[s] <= t && t <= v[mid]){
                    e = mid - 1;
                    // ans = mid;
                }else{
                    s = mid + 1;
                }
            }else{
                if(v[mid] <= t && t <= v[e]){
                    s = mid + 1;
                    // ans = mid;
                }else{
                    e = mid - 1;
                }
            }
        }
        return ans;
    }
};