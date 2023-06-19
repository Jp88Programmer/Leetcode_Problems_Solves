class Solution {
public:
    string intToRoman(int num) {
        
//         map<int,string>m;
                
//         m[1] = "I";
//         m[5] = "V";
//         m[4] = "IV";
//         m[9] = "IX";
//         m[10] = "X";
//         m[40] = "XL";
//         m[90] = "XC";
//         m[100] = "C";
//         m[400] = "CD";
//         m[500] = "D";
//         m[900] = "CM";
//         m[1000] = "M";
        
        string ans = "";
        vector<pair<int,string>> vecc;
        vecc.push_back({1000,"M"});
        vecc.push_back({900,"CM"});
        vecc.push_back({500,"D"});
        vecc.push_back({400,"CD"});
        vecc.push_back({100,"C"});
        vecc.push_back({90,"XC"});
        vecc.push_back({50,"L"});
        vecc.push_back({40,"XL"});
        vecc.push_back({10,"X"});
        vecc.push_back({9,"IX"});
        vecc.push_back({5,"V"});
        vecc.push_back({4,"IV"});
        vecc.push_back({1,"I"});
        
        for(int i=0; i<13; i++){
            
            while(num>=vecc[i].first)
            {
                num -= vecc[i].first;
                ans += vecc[i].second;
            }
        }
        
        return ans;

        
    }
};