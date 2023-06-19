class Solution {

private:
    int min_element(vector<int>&p){
        
        int min = 0;
        for(int i =1; i<p.size(); i++)
            if(p[min] > p[i])
                min = i;
        
        return min;
    }
public:
    
    int maxProfit(vector<int>& prices) {
       int buy = prices[0];
        int profit = 0;
        
        for(int i = 1; i<prices.size(); i++){
            profit = max(profit,prices[i]-buy);
            buy = min(buy,prices[i]);
        }
        return profit;
    } 
};