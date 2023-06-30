class Solution {
public:
    string reverseWords(string s) {
        
        /* 
        stringstream ss(s);
        
        string w ;
        vector<string>v;
        while(ss >> w){
            v.push_back(w);
        }
        s = "";

        for(int i = v.size()-1; i>=0; i--){
            
                s += v[i];
                if(i > 0)
                    s += " ";
        }
        
        return s;
        */
        
        reverse(s.begin(),s.end());
        
        int l = 0,r=0,i=0,n = s.size();
        
        while(i < n){
            
            while(i < n && s[i] != ' ')
                s[r++] = s[i++];
            
            if(l < r){
                reverse(s.begin()+l,s.begin()+r);
                if(r == n) break;
                s[r++] = ' ';
                l = r;
            }
            
            ++i;
        }
        
        if(r > 0 && s[r-1] == ' ') --r;
        
        s.resize(r);
        
        return s;
        
    }
};