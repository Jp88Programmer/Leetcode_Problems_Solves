class Solution {
public:
    
    bool syn(int num){
        string str = to_string(num);
        if(str.size() % 2) return false;
        int l = 0,e = str.size()-1,sum1=0,sum2=0;
        while(l < e){
            sum1 += str[l] - 48;
            sum2 += str[e] - 48;
            l++;
            e--;
        }
        if(sum1 != sum2) return false;
        return true;
    }
    int countSymmetricIntegers(int low, int high) {
        
        int count = 0;
        for(int i = low ; i <= high ; i++){
            if(syn(i))
                count++;
        }
        return count;
    }
};