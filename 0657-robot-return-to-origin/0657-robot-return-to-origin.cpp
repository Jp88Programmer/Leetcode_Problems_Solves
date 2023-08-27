class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,d=0,u=0;
        for(auto i : moves){
            if(i == 'L') l++;
            if(i == 'R') r++;
            if(i == 'D') d++;
            if(i == 'U') u++;
        }
        return abs(l - r) + abs(u - d) == 0;
    }
};