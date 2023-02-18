class Solution {
public:
    int minMaxDifference(int num) {
        
        string ns = to_string(num);        
        char first = ns[0];
        char firstmin = ns[0];
        //to find first digit which replace with 9 
        for(auto i : ns){
            if(i != '9')
            {
                first = i;
                break;
            }
        }
        
        string maxs = "";
        string mins = "";
        for(int i = 0; i<ns.size(); i++){
            
            if(ns[i] == first)
                maxs += '9';
            else
                maxs += ns[i];
            
            if(ns[i] == firstmin)
                mins += '0';
            else
                mins += ns[i];
        }
        
//          for(int i = 0; i<ns.size(); i++){
            
//             if(ns[i] == firstmin){
//                 // maxs += '9';
//                 mins += '0';
//             }else{
//                 // maxs += ns[i];
//                 mins += ns[i];
//             }
//         }
        
        int ma = stoi(maxs);
        int mi = stoi(mins);
        cout << ma << " " << mi << endl;
        return stoi(maxs) - stoi(mins);
    }
};