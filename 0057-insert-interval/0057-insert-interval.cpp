#define vi vector<int>
#define vii vector<vector<int>>
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        /*
        int n = intervals.size();
        vi start,end;
        
        vii result ;
        
        for(int i = 0; i<n; i++){
            
            if(intervals[i][1] < newInterval[0])
                result.push_back(intervals[i]);
            else if(intervals[i][0] > newInterval[1]){
                result.push_back(newInterval);
                newInterval = intervals[i];
            }
            else if(intervals[i][0] <= newInterval[1] || intervals[i][1] >= newInterval[0]){
                newInterval[0] = min(newInterval[0],intervals[i][0]);
                newInterval[1] = max(newInterval[1],intervals[i][1]);
            }
        }
        
        result.push_back(newInterval);
        return result ;
        */
        
        int n = intervals.size();
        
        int pos = lower_bound(begin(intervals), end(intervals), newInterval) - begin(intervals);
        
        intervals.insert(intervals.begin() + pos, newInterval);
        
        int j = 0;
        for(int i = 1;i <= n;i++){
            if(intervals[i][0] <= intervals[j][1])
            {
                intervals[j][0] = min(intervals[j][0], intervals[i][0]);
                intervals[j][1] = max(intervals[j][1], intervals[i][1]);
            }
            else{
                intervals[++j] = intervals[i];
            }
                
        }
        intervals.resize(j + 1);
        return intervals;
        
        
    }
};