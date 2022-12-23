#define vi vector<int>
#define vii vector<vector<int>>
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
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
        /*
        for(int i = 0;  i<n; i++){
            start.push_back(intervals[i][0]);
            start.push_back(intervals[i][1]);
        }
        
        sort(start.begin(),start.end());
        
        // for(auto i : start) cout << i << " ";
        
        int s = newInterval[0];
        int e = newInterval[1];
        
        for(int i = 0; i<start.size() ; i++){
            
            if(i!=0 && start[i] > s){
                s = start[i-1];
                break;
            }
        }
        
        for(int i = 0; i<start.size() ; i++){
            if(start[i] > e){
                e = start[i];
                // cout << e << endl;
                break;
            }
        }
        
        cout << s << " " << e << endl;
        vii ans ;
        for(int i = 0; i < n ; i++){
            
            if(intervals[i][0] < s){
                
                if(intervals[i][1] < s && intervals[i][1] < e)
                    ans.push_back(intervals[i]);
                
            }else{
                
                if(intervals[i][1] > s && intervals[i][1] > e)
                    ans.push_back(intervals[i]);
            }
        }
        
        ans.push_back({s,e});
        
        sort(ans.begin(),ans.end());
        
        return ans;
        */
    }
};