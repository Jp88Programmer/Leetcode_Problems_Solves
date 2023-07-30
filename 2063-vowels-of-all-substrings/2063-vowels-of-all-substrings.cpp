class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' ||ch == 'u';
    }
    long long countVowels(string w) {
        long long res = 0,n=w.size();
        
        for(int i = 0; i < w.size(); i++){
            if(isVowel(w[i])){
               long long sum = i + 1;
               long long sum1 = n - 1 - i;
                long long sumr = (sum-1)*sum1;
                res += sum + sum1 + sumr;
            }
            
        }
        return res;
    }
};