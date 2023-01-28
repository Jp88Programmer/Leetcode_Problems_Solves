class SummaryRanges {
public:
    set<int>nums;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        nums.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        /*
        vector<vector<int>> in;
        
        int start = *s.begin();
        int end = *s.end();
        
        for(auto it = ++s.begin() ; it != s.end(); it++){
            int val = *it;
            
            if(val - end == 1){
                end = val;
            }else{
                in.push_back({start,end});
                start=end=val;
            }
        }
        in.push_back({start,end});
        return in;
        */
        
         vector<vector<int>> intervals;
        int start = *nums.begin();
        int end = *nums.begin();
        for (auto it = ++nums.begin(); it != nums.end(); it++) {
            int val = *it;
            if (val - end == 1) {
                end = val;
            } else {
                intervals.push_back({start, end});
                start = end = val;
            }
        }
        intervals.push_back({start, end});
        return intervals;
        
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */