class Solution {
public:
    bool isvowel(char s){
        if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' ||s == 'a' ||s == 'e' ||s == 'i' || s == 'o' || s == 'u')
            return true;
        return false;
    }
    string sortVowels(string s) {
        map<char,int>m;
        
        for(auto i : s){
            if(isvowel(i)){
                m[i]++;
            }
        }
        string vow = "";
        for(auto x : m){
            int i = 0;
            while(i++ < x.second)
                vow += x.first;
        }
        string t = "";
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(isvowel(s[i])){
                t += vow[j++];
            }else{
                t += s[i];
            }
        }
        return t;
    }
};