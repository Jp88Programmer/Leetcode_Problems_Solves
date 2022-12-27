#define vii vector<vector<int>>
#define vi vector<int>
class Solution {
    
public:
    static bool cmp(vi &a,vi &b){
        return (a[1] - a[0]) < (b[1] - b[0]);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        // vi diff = capacity;
        for(int i = 0; i<capacity.size(); i++){
            capacity[i] = abs(capacity[i]-rocks[i]);
        }
        sort(capacity.begin(),capacity.end());
        int i ;
        for(i = 0; i<capacity.size() && additionalRocks >= capacity[i]; i++){
            additionalRocks -= capacity[i];
        }
        
        return i;
    }
};