class Solution {
public:
    bool isPal(string s,int start,int end){
	    
	    if(start>=end)
	        return true;
	   
	    if(s[start] != s[end]) return false;
	    
	    return isPal(s,start+1,end-1);
	   
	}
    bool isPalindrome(string s) {
        
        string str = "";
        
        for(auto i : s){
            
            if(isupper(i))
                str += tolower(i);
            else if(i >= 97 && i <= 122 || i >= 48 && i <= 57)
                str += i;
        }
        
        // return str;
        cout << str << endl;
        int start = 0,end = str.size()-1;
	   while(start < end){
	       if(str[start++] != str[end--]) return false;
	   }
	   
	   return true;
        
        // return isPal(str,0,str.size()-1);
        // return true;
    }
};