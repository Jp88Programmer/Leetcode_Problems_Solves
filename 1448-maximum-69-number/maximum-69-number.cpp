class Solution {
public:
    int maximum69Number (int num) {
        
        /*
        string str = to_string(num);
        int m = num ;
        for(int i = 0; i<str.size(); i++){
            char ch = '#';
            if(str[i] == '6'){
                str[i] = '9';
                ch = '9';
            }
            int n = stoi(str);
            if(ch == '9')
                str[i] = '6';
            
            m = max(m,n);
        }
        
        return m;
        */
        
        string str = to_string(num);
        int m = num ;
        for(int i = 0; i<str.size(); i++){
            // char ch = '#';
            if(str[i] == '6'){
                str[i] = '9';
                // ch = '9';
                break;
            }
        }
        
         int n = stoi(str);
        return n;
    }
};