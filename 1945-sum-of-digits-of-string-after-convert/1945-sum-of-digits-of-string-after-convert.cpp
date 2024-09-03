class Solution {
public:
    
    int sumDigit(int value){
        int sum = 0;
        
        while(value > 0){
            sum += value % 10;
            value /= 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        
        int sum = 0,p = k;
        for(auto str:s){
            int value = str - 'a' + 1;
            sum += sumDigit(value);
        }
        p--;   
        cout << sum << endl;
        while(p > 0){
           sum = sumDigit(sum);
            cout << sum << endl;
           p--;
        }
        return sum;
    }
};