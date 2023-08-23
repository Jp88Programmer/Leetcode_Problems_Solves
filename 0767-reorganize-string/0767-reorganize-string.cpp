class Solution {
public:
    string reorganizeString(string s) {
        string str = "";
        int n = s.size();
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        // int arr[26] = {0};
        for(auto i : s)
            m[i]++;
        
        for(auto x : m){
            pq.push(make_pair(x.second,x.first));
        }
        
        while(pq.size()>1){
            auto t1 = pq.top();
            pq.pop();
            auto t2 = pq.top();
            pq.pop();
            
            str += t1.second;
            str += t2.second;
            
            t1.first--;
            t2.first--;
            
            if(t1.first)
                pq.push(t1);
            
            if(t2.first)
                pq.push(t2);
        }
        
        if(!pq.empty()){
            if(pq.top().first > 1)
                return "";
            else
                str += pq.top().second;
        }
        
        return str;
        // for(int i = 0; i<26; i++){
        //     if(arr[i] > n/2)
        //         return "";
        //     else{
        //         str += arr[i] > 0 ? (char)(i+ 97) : "";
        //     }
        // }
    }
};