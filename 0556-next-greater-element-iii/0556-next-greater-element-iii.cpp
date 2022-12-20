class Solution {
public:
    int nextGreaterElement(int n) {
        
        long ans = INT_MAX;
        // cout << INT_MAX << endl;
        string num = to_string(n);
        next_permutation(num.begin(),num.end());
        long res = stol(num);
        return (res > INT_MAX || res <= n) ? -1 : res; 
        
        
//         while(next_permutation(num.begin(),num.end())){
//             long num1 = stol(num);
//             cout << num1 << endl;
            
//             // if(num1 > INT_MAX) {
//             //     // cout << num1 << endl;
//             //     continue;
//             //     // return -1;
//             // }
//             // ans = min(ans,num1);
//             if(ans > num1 && ans > n){
//                 ans = num1;
//             }
//         }
        
//         if(ans == INT_MAX) return -1;
        
//         return ans;
    }
};