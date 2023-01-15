class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
         const unsigned int size = vals.size();
        int out = size, walker, prewalker;
        map <pair<int,int>, int> pairs;
        vector<int> parent(size,-1), highestParent(size,-1); 
        vector<bool> checker(size,0);
        highestParent[0] = 0; checker[0] = 1;
        for (const auto& p : edges) {
            if (checker[p[0]]) {
                parent[p[1]] = p[0];
            } else {parent[p[0]] = p[1]; 
            } checker[p[1]] = 1; checker[p[0]] = 1;
        }
        for (int i = 1; i < size; i++) {
            walker = i;
            prewalker = parent[i];
            while ((walker != prewalker) && (walker != 0) && (prewalker != -1) && (vals[prewalker] <= vals[i]) ) {
                walker = prewalker; prewalker = highestParent[walker];
            }
            prewalker = parent[walker];
            while ((prewalker != -1) && (vals[prewalker] <= vals[i])) {
                walker = prewalker; prewalker = parent[walker]; 
            }
            highestParent[i] = walker;
        }
        for (int i = 0; i < size; i++) {pairs[{vals[i],highestParent[i]}]++;}
        for (auto p : pairs) {out += ((p.second * (p.second - 1)) >> 1);}
        return out;
    }
};