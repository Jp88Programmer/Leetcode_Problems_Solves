class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdi = INT_MIN;
        int area = 0;

        for(int i = 0; i<dimensions.size(); i++){
            vector<int> d = dimensions[i];
            int di = d[0] * d[0] + d[1] * d[1];
            if(maxdi < di || (maxdi == di && area < d[0] * d[1])){
                maxdi = di;
                area = d[0] * d[1];
            }
        }

        return area;
    }
};