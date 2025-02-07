class Solution {
public:
    string countAndSay(int n) {
        
        /*
        if(n == 1)
            return "1";
        if(n==2)
            return "11";
        
        string s="11";
        for(int i = 3 ; i <= n ; i++){
            
            string t = "";
            s = s + "&";
            
            int c = 1;
            
            for(int j = 1 ; j <s.length() ; j++){
                
                if(s[j] != s[j-1]){
                    
                    t += to_string(c);
                    t += s[j-1];
                    c = 1;
                }
                else
                    c++;
                
            }
            
            s = t;
            
        }
        
        return s ;
        */
        
        if(n == 1) return "1";
        
        string str = countAndSay(n-1);
        
        string res = "";
        
        int i = 0;
        
        int len = str.size();
        
        while(i < len){
            
            char c = str[i];
            int count = 0;
            while(i < len && str[i] == c)
            {
                count++;
                i++;
            }
            
            res += '0' + count;
            res += c;
        }
        
        return res;
    }
};