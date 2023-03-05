class Solution {
public:
    int passThePillow(int n, int time) {
        
        n--;
        int mod = time % n;
        int round = time / n;
        
        if(round%2){
            return (n - mod) + 1;
        }
            
        return mod + 1;
          
    }
};