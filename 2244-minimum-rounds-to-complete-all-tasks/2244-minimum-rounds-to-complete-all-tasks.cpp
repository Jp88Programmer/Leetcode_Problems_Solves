class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int>m;
        int count = 0;
        int n = tasks.size();
        
        for(auto i : tasks) m[i]++;
        
        for(auto x : m){
            
            if(x.second == 1) return -1;
            
            /*
            if(x.second % 3 == 0) count += x.second / 3;
            if(x.second % 3 == 1) count+= x.second/3 - 1 + 2;
            if(x.second % 3 == 2) count += x.second / 3 + 1;
            */
            // count += ceil(x.second/3);
            count += (x.second + 2) / 3;
        }
        
        return count;
        /*
        sort(tasks.begin(),tasks.end());
        for(int i = 0; i<tasks.size(); i++){
            m[tasks[i]]++;
            
            if(m[tasks[i]] == 2) count++;
            else if(m[tasks[i]] % 3 == 1){
                cout << tasks[i] << " " << m[tasks[i]] << endl;
                count++;
            }
            
            // if(m[tasks[i]] == 4) m[tasks[i]] = 1;
            // m[tasks[i-1]] % 3 == 1
            if(i != 0 && tasks[i-1] != tasks[i] && m[tasks[i-1]] == 1)
                return -1;
        }
        
        // if(m[tasks[n-1]] % 3 == 1) return -1;
        if(m[tasks[n-1]] == 1) return -1;
        return count;
        
        */
    }
};