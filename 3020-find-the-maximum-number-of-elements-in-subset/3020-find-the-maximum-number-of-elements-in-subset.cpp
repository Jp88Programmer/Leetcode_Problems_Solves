class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<int,int>m;
        for(auto i : nums) m[i]++;
        int ans = 0;
        for(auto [k,v] : m){
            long long t = k;
            int count = 0;
            if(t == 1){
                count += m[t];
                m[t] = 0;
            }
            
            while(t < INT_MAX && m[t] > 0){
                count += 2;
                if(m[t] == 1)
                    break;
                m[t] = 0;
                t = t*t;
            }
            
            if(count % 2 == 0) count--;
            ans = max(ans,count);
        }
        
        return ans;
    }
};