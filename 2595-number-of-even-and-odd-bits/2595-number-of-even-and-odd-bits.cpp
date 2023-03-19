class Solution {
public:
        
    vector<int> evenOddBit(int n) {
        
        vector<int> ans(2,0);
        
        int num = n;
        int index = 0;
        while(num>0){
            int bits=num & 1;
            num /= 2;
            if(bits){
                if(index%2==0)
                    ans[0]+=1;
                // if(index%2==1)
                else
                    ans[1]+=1;
            }
            index++;
        }
        
        return ans;
    }
};