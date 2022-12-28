class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        if(bills[0] != 5) return false;
        int arr[3] = {0,0,0};
        
        for(int i = 0; i<bills.size(); i++){
            
            if(bills[i] == 5){
                arr[0]++;
            }
            
            if(bills[i] == 10){
                arr[1]++;
                if(arr[0] == 0) return false;
                arr[0]--;
            }
            if(bills[i] == 20){
                arr[2]++;
                
                if(arr[1] >= 1){
                    
                    if(arr[0] >= 1){
                        arr[1]--;
                        arr[0]-=1;
                    }else{
                        return false;
                    }
                }else{
                    if(arr[0] >= 3){
                        arr[0]-= 3;
                    }else{
                        return false;
                    }
                }
                
//                 if(arr[1] < 1 && arr[0] < 1) return false;
//                 else{
//                     arr[1]--;
//                     arr[0]-=2;
//                 }
                
//                 if(arr[0] < 3 && arr[1] <= 0) return false;
//                 else{
//                     arr[0] -= 3;
//                 }
            }
            
        }
        
        return true;
        
    }
};