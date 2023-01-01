class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
       /*
        stack<pair<int,int>>s;
        vector<int>ans(t.size(),0);
        for(int i = t.size()-1 ; i>=0 ; i--){
            
            int count = 0;
            // while(!s.empty() && s.top().first > t[i])
            // {
            //     int val = s.top().second;
            //     if(val == 0)
            //         count++;
            //     else
            //         count = s.top().second  ;
            //     s.pop();
            //     cout << count << endl;
            // }
            
            while(!s.empty() && s.top().first > t[i])
            {
                int val = s.top().second;
                if(val == 0)
                    count++;
                else
                    count += s.top().second  ;
                s.pop();
                cout << count << endl;
            }
            
            // if(count == 0)
            //     s.push({t[i],1});
            // else
                s.push({t[i],count});
            ans[i] = count ;
        }
        
        return ans;
        */
        
        /*
        vector<int>ans(t.size(),0);
        
        for(int i = 0; i<t.size(); i++){
            
            int count = 0;
            int j = 0;
            for( j = i + 1; j < t.size(); j++){
                if(t[j] > t[i]){
                    count++;
                    break;
                }
                else
                    count++;
            }
            
            if(j == t.size())
                ans[i] = 0;
            else
                ans[i] = count ;
            
        }
        
        return ans;
        */
        
        stack<pair<int,int>>s;
        vector<int>ans(t.size());
        for(int i = 0; i<t.size(); i++){
            
            while(!s.empty() && t[i] > s.top().first){
                ans[s.top().second] = i - s.top().second;
                s.pop();
            }
            
            // ans[i] = s.empty() ? 0 : i - s.top().second;
            s.push({t[i],i});
        }
        
        return ans;
    }
};