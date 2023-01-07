class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
          int n = gas.size();
        int tot = 0, tank = 0, idx = 0;     


        for (int i = 0; i < n; ++i){
            int state = gas[i] - cost[i];
            tank += state;
            tot += state;

            if (tot < 0)
                tot = 0, idx = i + 1;
        }
        if (tank < 0)
            return -1;
        
        return idx;
    }
};