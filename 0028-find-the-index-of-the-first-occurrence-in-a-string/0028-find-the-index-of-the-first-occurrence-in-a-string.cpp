class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
     //Your code here
     int index = -1 ;
  
     for(int i = 0 ; i < haystack.size() ; i++){
         
         int j = i ;
        int k =0 ;   
         while(haystack[j] == needle[k] && k < needle.size()){
               k++; j++;
            // cout <<k << endl;
         }
          
         j = i ;
        
         if(k == needle.size()){
            // cout <<k << endl;
           index = i ; 
           return index ;
         }
         
         
   
     }
     
     return index ;
    }
};