class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' ||ch == 'u';
    }
    long long countVowels(string w) {
        long long res = 0,n=w.size(),sum = 0;
        for(int i = n-1;i>=0; i--){
            if(isVowel(w[i]))
                sum += n - i;
            res += sum;
        }
        return res;
    }
};