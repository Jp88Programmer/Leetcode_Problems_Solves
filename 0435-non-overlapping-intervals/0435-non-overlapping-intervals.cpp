class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        
        /*
         sort(inter.begin(),inter.end());
         vector<vector<int>> ans;
         int s = inter[0][0];
         int e = inter[0][1];
         for(int i=1; i<inter.size(); i++){
             
             if(inter[i][0] < e && inter[i][1] > s){
                 s = min(inter[i][0],s);
                 e = max(inter[i][1],e);
             }else{
                //  ans.push_back({s,e});
                ans.push_back(inter[i]);
                //  s = inter[i][0];
                //  e = inter[i][1];
             }
         }
         
         ans.push_back({s,e});
          
        //  cout << s << " " << e << endl;
         
         int count = 0;
         for(int i = 0; i<inter.size(); i++){
             
             if(inter[i][0] == s && inter[i][1] == e)
                count++;
         }
         
         return count ;
         */
        
        sort(inter.begin(),inter.end(),cmp);
        
        for(auto i : inter){
            cout << i[0] << " "<< i[1] << endl;
        }
        
        int pre = 0;
        int count = 0;
        for(int i = 1; i<inter.size(); i++){
            
            if(inter[i][0] < inter[pre][1]){
                count++;
            }else{
                pre = i;
            }
        }
        
        return count;
        
    }
};