class Solution {
public:
    bool sumcom(vector<int>&v,int sum,int k){
        for(int i = 0; i<v.size(); i++){
            if(sum + v[i] == k) return false;
        }
        return true;
    }
    int fun(vector<int>&v,int n,int k){
        
        v.push_back(1);
        for(int i = 2; i<=50; i++){
            if(v.size() == n)
                break;
            if(sumcom(v,i,k)){
                v.push_back(i);
            }
            
        }
        
        int sum = 0;
        for(int i = 0; i<v.size(); i++){
            cout << v[i] << " ";
            sum += v[i];
        }
        return sum;
    }
    int minimumSum(int n, int k) {
      
        unordered_set<int>s;
        int ans = 0;
        for(int i = 1; s.size() < n; i++){
            if(s.find(k - i) == s.end()){
                ans += i;
                s.insert(i);
            }
        }
        return ans;
    }
};