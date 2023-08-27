class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,d=0;
        for(auto i : moves){
            if(i == 'L') l++;
            if(i == 'R') r++;
            if(i == '_') d++;
        }
        return abs(l - r) + d;
    }
};