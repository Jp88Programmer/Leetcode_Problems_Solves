class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int m = money;
        int count = 0;
        for(int i = 0; i<prices.size(); i++){
            if(m > 0){
                m -= prices[i];
                count++;
            }else
                break;
            if(count >= 2) break;
        cout << m << " " << count << endl;
        }
        return m >= 0 && count >= 2 ? m : money; 
            
    }
};