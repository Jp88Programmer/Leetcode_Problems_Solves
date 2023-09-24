class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int one = 0,z = 0;
        for(auto i : s){
            if(i == '1') one++;
            if(i == '0') z++;
        }
        string str = "";
            
        while(one > 1){
            str += '1';
            one--;
        }

        while(z > 0){
            str += '0';
            z--;
        }
        
        if(one == 1)
            str += '1';
        
        return str;
                

    }
};