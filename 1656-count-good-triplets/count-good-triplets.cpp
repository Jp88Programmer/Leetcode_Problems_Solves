class Solution {
public:
     bool isGood(int first, int second, int third, int a, int b, int c) {
        return abs(first-second) <= a && abs(second-third) <= b && abs(first-third) <= c;
    }
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
         int n = arr.size();
    
    int count = 0;
    for(int i = 0; i<n; i++){
        
        for(int j = i + 1; j<n; j++){
            
            for(int k = j + 1; k < n ; k++){
                
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                    count = count + 1;
            }
        }
    }
        return count;
        
    }
};