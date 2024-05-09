/**
 * @param {number[]} happiness
 * @param {number} k
 * @return {number}
 */
var maximumHappinessSum = function(hap, k) {
    
    hap.sort((a,b)=> a - b);
    let i = 0,ans = 0;
    while(i < k){
        
        let selectEle = hap[hap.length - 1 - i] - i;
        if(selectEle > 0){
            ans += selectEle;
        }else{
            break;
        }
        i++;
    }
    return ans;
};