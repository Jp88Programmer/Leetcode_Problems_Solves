class Solution {
public:
    vector<string> split(string str, char del){
        
          string temp = "";
          vector<string>arr;
          for(int i=0; i<(int)str.size(); i++){
     
             if(str[i] != del){
                temp += str[i];
            }
              else{
                  arr.push_back(temp);
                  temp = "";
            }
        }

        arr.push_back(temp);
        return arr;
    }
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string>m;
        unordered_map<string,char>m1;
        vector<string>arr = split(s,' ');
        for(auto i : arr) cout << i << " ";
        cout << endl;
        
        if(arr.size() != pattern.size()) return false;
        
        for(int i = 0; i<pattern.size(); i++){
            
            if(m.find(pattern[i]) != m.end()){
                if(m[pattern[i]] != arr[i]){
                    return false;
                }
            }else{
                m[pattern[i]] = arr[i];
                if(m1.find(arr[i]) != m1.end()){
                    return false;
                }else{
                    m1[arr[i]] = pattern[i];
                }
            }
        }
        
        return true;
    }
};