#define vii vector<vector<int>>
#define vi vector<int>
class Solution {
    
public:
    static bool cmp(vi &a,vi &b){
        return (a[1] - a[0]) < (b[1] - b[0]);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int n = capacity.size();
        for(int i = 0; i<n; i++){
            capacity[i] = abs(capacity[i]-rocks[i]);
        }
        sort(capacity.begin(),capacity.end());
        int i ;
        for(i = 0; i<n && additionalRocks >= capacity[i]; i++){
            additionalRocks -= capacity[i];
        }
        
        return i;
    }
};