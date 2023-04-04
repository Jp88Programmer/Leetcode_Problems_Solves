class Solution {
public:
    int partitionString(string s) {
        
        // int arr[26] = {0};
        // int* arr = new int[26];
        vector<int>arr(26,0);
        int count = 0;
        for(int i = 0 ; i<s.size(); i++){
            if(arr[s[i]-97] == 0){
                
                arr[s[i]-97]++;
            }else{
                cout << s[i] << endl;
                fill(arr.begin(),arr.end(),0);
                count++;
                i--;
            }
        }
        return count+1;
    }
};