class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>m;
        
        m['I'] = 1 ;
        m['V'] = 5 ;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        
        int num = 0 ;
        
        num = m[s[s.size()-1]];
        
        for(int i = 0 ; i < s.size()-1 ; i++){
            
            
//             // num += m[s[i]];
//             if(i!=0 && s[i] == 'V' && s[i-1] == 'I'){
//                 num += 4 ;
//                 i--;
//             }
            
//             else if(i!=0 && s[i] == 'X' && s[i-1] == 'I'){
//                 num += 9 ;
//                 i--;
//             }
            
//             else if(i!=0 && s[i] == 'L' && s[i-1] == 'X'){
//                 num += 40 ;
//                 i--;
//             }
            
//             else if(i!=0 && s[i] == 'C' && s[i-1] == 'X'){
//                 num += 90 ;
//                 i--;
//             }
            
//             else if(i!=0 && s[i] == 'D' && s[i-1] == 'C'){
//                 num += 400 ;
//                 i--;
//             }
            
//             else if(i!=0 && s[i] == 'M' && s[i-1] == 'C'){
//                 num += 900 ;
//                 i--;
//             }
            
            if(m[s[i]] < m[s[i+1]]){
                
                num -= m[s[i]];
                
            }
            else{
                
                num += m[s[i]];
            }
            
        }
        
        return num ;
    }
};