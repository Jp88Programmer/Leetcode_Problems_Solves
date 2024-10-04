class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin(),skill.end());
        
        if(skill.size() == 2){
            return skill[0]*skill[1];
        }
        
        int n = skill.size();
        int s = 0,e = skill.size()-1;
        
        int sum = skill[s] + skill[e];
        long long mul = 0;
        while(s < e){
            int sum1 = skill[s] + skill[e];
            
            if(sum1 != sum) return -1;
            
            mul += skill[s]*skill[e];
            s++;
            e--;
        }
        
        return mul;
    }
};