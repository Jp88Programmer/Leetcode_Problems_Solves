#define vi vector<int>
#define vii vector<vector<int>>
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        //solution 1 
        int n = intervals.size();
        vi start,end;
        
        vii result ;
        
        for(int i = 0; i<n; i++){
            
            //the new interval is after the range of other interval, so we can leave the current interval baecause the new one does not overlap with it
            if(intervals[i][1] < newInterval[0])
                result.push_back(intervals[i]);
            
            // the new interval's range is before the other, so we can add the new interval and update it to the current one
            else if(intervals[i][0] > newInterval[1]){
                result.push_back(newInterval);
                newInterval = intervals[i];
            }
            
            // the new interval is in the range of the other interval, we have an overlap, so we must choose the min for start and max for end of interval 
            else if(intervals[i][0] <= newInterval[1] || intervals[i][1] >= newInterval[0]){
                newInterval[0] = min(newInterval[0],intervals[i][0]);
                newInterval[1] = max(newInterval[1],intervals[i][1]);
            }
        }
        
        result.push_back(newInterval);
        return result ;
        
        
        /*
        //solution 2 
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
        */
        
    }
};