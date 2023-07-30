class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr[3] = {0};
        int j = 0,count = 0;
        for(int i = 0; i<s.size(); i++){
            arr[s[i] - 'a']++;
            while(arr[0] > 0 && arr[1] > 0 && arr[2] > 0){
                arr[s[j++]-'a']--;
                count += s.size() - i;
            }   
        }
        return count;
    }
};