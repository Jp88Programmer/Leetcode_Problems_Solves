class FrequencyTracker {
private:
    unordered_map<int,int>m;
    unordered_map<int,int>fr;
public:
    FrequencyTracker() {
        
    }
    
    void add(int number) {
        if(m[number]>0){
            fr[m[number]]--;
        }
        m[number]++;
        fr[m[number]]++;
    }
    
    void deleteOne(int number) {
        if(m[number] == 0){
            m.erase(number);
        }else{
            if(fr[m[number]] == 0){
                fr.erase(m[number]);
            }else{
                fr[m[number]]--;
            }
            m[number]--;
            if(m[number] != 0)
                fr[m[number]]++;
        }
        
    }
    
    bool hasFrequency(int frequency) {
        
        if(fr[frequency] > 0)
            return true;
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */