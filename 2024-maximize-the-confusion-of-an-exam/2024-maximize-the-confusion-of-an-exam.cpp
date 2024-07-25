class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        
        int arr[2]={0};
        int count = 0,j = 0;
        for(int i = 0 ; i<s.size(); i++){
            if(s[i] == 'T')
                arr[0]++;
            else
                arr[1]++;
            
            count = max(count,max(arr[0],arr[1]));
            if(i - j + 1 - count > k){
                if(s[j++] == 'T')
                    arr[0]--;
                else
                    arr[1]--;
            }
            
        }
        return s.size() - j;
    }
};