class Solution {
private:
    void segment(string &str,int start,int end){
        
        int countDot = 0;
        for(int i = start ; i<= end; i++){
            if(str[i] == '.')
                countDot++;
        }
        
        if(str[start] == 'L' && str[end] == 'R')
            return ;
        
        else if(str[start] == 'L' && str[end] == 'L'){
            
            int i = start + 1;
            while(i < end)
                str[i++] = 'L';
            return ;
        }
        else if(str[start] == 'R' && str[end] == 'R'){
            
            int i = start + 1;
            while(i < end)
                str[i++] = 'R';
            
            return ;
        }
        else if(str[start] == 'R' && str[end] == 'L'){
            
            int move = countDot / 2;
            
            int i = start + 1;
            while(move-- && i < end){
                str[i++] = 'R';
            }
            int j = end - 1;
            move = countDot / 2;
            while(move-- && i < end){
                str[j--] = 'L';
            }
            
            return ;
        }
        
        
    }
public:
    string pushDominoes(string dominoes) {
        
        string dummy = 'L' + dominoes + 'R';
        int start = 0;
        int end = 0;
        for(int i = 1; i<dummy.size(); i++){
            
            if(dummy[i] == 'L' || dummy[i] == 'R'){
                end = i;
                segment(dummy,start,end);
                start = end;
            }
            
        }
        
        return dummy.substr(1,dominoes.size());
    }
};