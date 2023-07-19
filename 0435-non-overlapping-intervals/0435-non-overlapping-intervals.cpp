class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end(),cmp);
        int count=0,overlapEndpoint=0;
        for(int i = 1; i<inter.size(); i++){
            if(inter[i][0] < inter[overlapEndpoint][1])
                count++;
            else
                overlapEndpoint = i;
        }
    return count;
    }
};