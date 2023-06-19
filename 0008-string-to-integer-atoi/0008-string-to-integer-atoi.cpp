class Solution {
public:
    int myAtoi(string s) {
        
        /*
        int n = s.size();
        int num = 0;
        long long int led = 1;
        bool flag = true;
        int maxIn = INT_MAX;
        for(int i = n - 1; i>=0 ; i--){
            
            
            if((s[i] >= 65 && s[i] <= 92 || s[i] >= 97 && s[i] <=122 ) && num>0)
                return 0;
            
            if(i!=n-1 && s[i] == '+' && (s[i+1] >= 48 && s[i+1] <= 57)){
                flag = true;
            }
            
            if(i!=n-1 && s[i] == '-' && (s[i+1] >= 48 && s[i+1] <= 57)){
                flag = false;
            }
            
            if(s[i] >= 48 && s[i] <= 57){
                if(led >= 2147483647)
                {
                    num = 2147483647  ;
                    // break;
                }
                else{
                    num += ((s[i] - 48)*led);
                    led *= 10 ;
                
                }
                
                
            }
        }
                   
        if(led >= 2147483647 && flag) 
               return num;
        else if(led >= 2147483647 && !flag) 
               return 0 - num - 1;
        else{
            if(!flag) return 0 - num ;
        }     
        
        return num;
        */
        //Method 2 //
        /*
        int mul = 1, cnt = 0;
        long long res = 0;
        bool space = 0, sign = 0, num = 0;
        
        for(char ch : s) {
            if(num && (ch < '0' || ch > '9')) break;
            if(ch == ' ') {
                if(space == 1) break;
                continue;
            }
            else if(ch == '+' || ch == '-') {
                if(sign) break;
                mul = (ch == '-') ? -1 : 1;
                sign = 1;
            }
            else if(ch == '.') break;
            else if(ch >= '0' && ch <= '9' && cnt < 12) {
                res = (res*10) + (ch-'0');
                num = 1;
                if(res > 0) ++cnt;
            }       
            else break;
            if(ch != ' ') space = 1;
            
        }
        
        res *= mul;
        
        if(res <= -2147483648)return -2147483648;
        if(res >= 2147483647)return 2147483647;
        return res;
        */
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool positive = s[i] == '+';
        bool negative = s[i] == '-';
        positive == true ? i++ : i;
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num = negative ? -num : num;
        cout<<num<<endl;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        cout<<num<<endl;
        return int(num);
        
    }
};