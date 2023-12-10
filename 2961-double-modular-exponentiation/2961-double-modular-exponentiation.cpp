#include <bits/stdc++.h>
class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& v, int target) {
        vector<int>ans;
        
        for(int i = 0; i<v.size(); i++){
            int a = v[i][0],b = v[i][1],c = v[i][2],m = v[i][3];
            a = a % 10;
            int t = 1;
            for(int p = 1; p<= b; p++)
                t = (t * a) % 10;
            int x = 1;
            for(int p = 1; p<=c; p++){
                x = (x * t) % m;
            }
            cout << x << endl;
            if(x == target)
                ans.push_back(i);
        }
        return ans;
    }
};