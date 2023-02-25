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
        /*
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
        */
        int minElement = prices[0];
        int diff = 0;
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < minElement) 
                minElement = prices[i];
            else{
                minElement = min(minElement,prices[i]);
                diff = max(diff,prices[i]-minElement);
            }
                
        }
        return diff;
    } 
};