//{ Driver Code Starts
// Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int pageFaults(int n, int c, int pages[]){
        // code here
        /*
        queue<int>q;
        unordered_set<int>s;
        for(int i = 0;i <c ; i++){
            q.push(pages[i]);
            s.insert(pages[i]);
        }
        
        int i = c;
        int np = 0,ans = 0;
        
        while(i < n){
            
            int val = q.front();
            if(s.find(pages[i]) != s.end()){
                q.pop();
                q.push(pages[i]);
                // c++;
                s.erase(s.find(pages[i]));
            }else{
                // q.pop();
                // c++;
                ans++;
                if(np == c){
                    q.pop();
                    // q.push
                    q.push(pages[i]);
                }else{
                    q.push(pages[i]);
                    np++;
                }
                // q.push(pages[i]);
                s.erase(s.find(val));
                s.insert(pages[i]);
                
            }
            i++;
        }
        
            
        return c; 
        */
        vector<int>v;
        int count = 0;
        
        for(int i = 0; i<n ; i++){
            
            auto it = find(v.begin(),v.end(),pages[i]);
            
            if(it == v.end()){
                
                //memory full with capacity 
                if(v.size() == c){
                    v.erase(v.begin());
                }
                
                v.push_back(pages[i]);
                count++;
            }else{
                
                v.erase(it);
                v.push_back(pages[i]);
            }
            
        }
        
        return count ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, C;
        cin>>N;
        int pages[N];
        for(int i = 0;i < N;i++)
            cin>>pages[i];
        cin>>C;
        
        Solution ob;
        cout<<ob.pageFaults(N, C, pages)<<"\n";
    }
    return 0;
}
// } Driver Code Ends