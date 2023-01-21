class Solution {
public:
    
    void getIp(vector<string>&temp,vector<string>&ips,string &s,int index){
        
        if(index == s.size() && temp.size() == 4){
            string validIp = temp[0] + '.' + temp[1] + '.' + temp[2] + '.' + temp[3] ;
            
            ips.push_back(validIp);
            return;
        }
        
        string tempStr = "";
        
        for(int i = index ; i < s.length() && temp.size() < 4 ; i++){
            if(s[i] - '0' > 9) continue;
            
            tempStr += s[i];
            
            int tempInt = stoi(tempStr);
            
            if(0 <= tempInt && tempInt <= 255){
                temp.push_back(tempStr);
                getIp(temp,ips,s,i+1);
                temp.pop_back();
            }
            
            if(tempInt <= 0 || tempInt > 255)
                break;
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
        
        vector<string>temp;
        vector<string>ips;
        
        getIp(temp,ips,s,0);
        
        return ips;
        
    }
};