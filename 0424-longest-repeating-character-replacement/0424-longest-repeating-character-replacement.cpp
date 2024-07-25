class Solution {
public:
    int characterReplacement(string s, int k) {
        int arr[26] = {0};
        int maxCount = 0,j = 0;
        for(int i = 0; i<s.size(); i++){
            maxCount = max(maxCount,++arr[s[i]-'A']);
            if((i - j + 1) - maxCount > k){
                arr[s[j++] - 'A']--;
            }
        }
        return s.size() - j;
    }
};

