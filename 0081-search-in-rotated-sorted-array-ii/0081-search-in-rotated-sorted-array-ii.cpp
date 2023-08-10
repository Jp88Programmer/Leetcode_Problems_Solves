class Solution {
public:
    bool search(vector<int>& v, int t) {
        
        int n = v.size();
        int s = 0;
        int e = n-1;

        while(s<=e){
            int m = (s+e)/2;
            if(v[m]==t) return true;
            
            //why this condition apply don't know 
            if(v[s] == v[m] && v[m] == v[e]){
                s++;
                e--;
            }
            else if(v[s]<=v[m]){
                if(v[s]<=t && v[m]>=t)
                    e = m - 1;
                else 
                    s = m + 1;
            }else{
                if(t>=v[m]&&t<=v[e])
                    // e = m - 1;
                    s = m + 1;
                else 
                    // s = m + 1;
                    e = m - 1;
            }
        }
        return false;
    }
};