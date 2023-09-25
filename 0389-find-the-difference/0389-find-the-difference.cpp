class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int arr[26] = {0};
        
        for(auto i:s)
            arr[i-'a']++;
        char ch = '0';
        for(int i = 0; i<t.size(); i++){
            if(arr[t[i]-'a'] == 0)
                ch = t[i];
            else{
                arr[t[i]-'a']--;
            }
        }
        return ch;
    }
};