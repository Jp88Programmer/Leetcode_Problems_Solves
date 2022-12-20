class Solution {
public:
    int nextGreaterElement(int n) {
        
        string num = to_string(n);
        next_permutation(num.begin(),num.end());
        long res = stol(num);
        return (res > INT_MAX || res <= n) ? -1 : res; 
    }
};