class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int id = 0;
        for(int i = 1; i<arr.size(); i++){
            if(arr[id] < arr[i])
                id = i;
        }
        return id;
    }
};