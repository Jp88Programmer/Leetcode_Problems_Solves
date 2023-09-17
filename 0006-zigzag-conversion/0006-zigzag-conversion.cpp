class Solution {
public:
    string convert(string str, int r) {
        
        if(r == 1) return str;
        vector<string>ans(r,"");
        bool neg = false;
        for(int i = 0,j = 0; i<str.size(); i++){
            
            if(!neg){
                ans[j] += str[i];
                j++;
            }else{
                ans[j] += str[i];
                j--;
            }            
            
            if(j == r-1 || j == 0){
                neg = !neg;
            }
            
            // if(j >= r-1){
            //     j--;
            // }
            
        }
        
        string res;
        for(int i = 0; i<r; i++){
            cout << ans[i] << endl;
            res += ans[i];
        }
        
        return res;
    }
};