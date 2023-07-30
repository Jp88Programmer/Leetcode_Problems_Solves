class Solution {
public:
    int maxScore(vector<int>& c, int k) {
       
        int j = 0,sum = 0,sum1= 0,count=0,n=c.size(),res = 0;
        sum = accumulate(c.begin(),c.end(),0);
        
        for(int i = 0; i<c.size(); i++){
            sum1 += c[i];
            count++;
            while(count > n-k){
                sum1 -= c[j++];
                count--;
            }
            if(count == n-k) res = max(res,sum - sum1);
        }
        return res;
    }
};