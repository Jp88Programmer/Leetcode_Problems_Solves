class Solution {
public:
    int minMaxDifference(int num) {
        
        string ns = to_string(num);        
        char firstmax = ns[0];
        char firstmin = ns[0];
        //to find first digit which replace with 9 
        for(auto i : ns){
            if(i != '9')
            {
                firstmax = i;
                break;
            }
        }
        
        string maxs = "";
        string mins = "";
        for(int i = 0; i<ns.size(); i++){
            
            if(ns[i] == firstmax)
                maxs += '9';
            else
                maxs += ns[i];
            
            if(ns[i] == firstmin)
                mins += '0';
            else
                mins += ns[i];
        }
        
        return stoi(maxs) - stoi(mins);
    }
};