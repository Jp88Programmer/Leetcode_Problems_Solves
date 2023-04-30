class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        
        int pin = 0;
        
        int sum1 = 0,sum2 = 0;
        for(int i = 0; i<p1.size(); i++){
            sum1 += pin > 0 ? 2*p1[i] : p1[i];
            pin--;
            if(p1[i] == 10){
                pin = 2;
            }
        }
        
        pin = 0;
        for(int i = 0; i<p2.size(); i++){
            sum2 += pin > 0 ? 2*p2[i] : p2[i];
            pin--;
            if(p2[i] == 10){
                pin = 2;
            }
        }
        
        // cout << sum1 << " " << sum2 << endl;
        return sum1 > sum2 ? 1 : sum1 == sum2 ? 0 : 2;
    }
};