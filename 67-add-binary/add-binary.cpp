class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.size() - 1,j=b.size() -1;
        int sum = 0;
        int carr = 0 ;
        string str ;
        while(i >= 0 && j >= 0){
            
            sum = a[i] - 48 + b[j] - 48 + carr;
            carr = sum / 2 ;
            sum = sum % 2 ;
            str += sum + 48;
            i--;
            j--;
        }
        
        while( i>=0){
            sum = a[i] - 48 + carr; 
            carr = sum / 2 ;
            sum %= 2;
            str += sum + 48;
            i--;
        }
        
        while(j>=0){
            sum = b[j] - 48 + carr; 
            carr = sum / 2 ;
            sum %= 2;
            str += sum + 48;
            j--;
        }
        
        if(carr != 0)
            str += carr + 48 ;
        
        reverse(str.begin(),str.end());
        
        return str;
    }
};