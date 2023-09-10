class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        int distx = abs(sx-fx);
        int disty = abs(sy-fy);
        if(distx == 0 &&  disty == 0) return t != 1;
        if(distx <= t && disty <= t) return true;
        return false;
    }
};