class Solution {
public:
    
    bool vaild(int id,vector<int>&p,int k){
        
        int last = p[0],count = 1;
        
        for(int i = 1; i < p.size() && count < k; i++){
            
            if(p[i] - last >= id){
                count++;
                last = p[i];
            }
        }
        
        return count == k;
    }
    int maximumTastiness(vector<int>& p, int k) {
        
        sort(p.begin(),p.end());
        
        int n = p.size();
        int s = 0,e = 1e9;
        
        // to apply binary search to index vs difference and find the difference which over the mid index value 
        
        while(s < e){
            
            int m = s + (e - s) /2;
            
            if(vaild(m,p,k)){
                s = m + 1;
            }else{
                e = m;
            }
        }
        
        return s - 1;
    }
};