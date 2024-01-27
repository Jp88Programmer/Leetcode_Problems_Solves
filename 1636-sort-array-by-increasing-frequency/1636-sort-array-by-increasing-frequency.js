/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArr = (arr1,arr2) => {
    if(arr1[1] === arr2[1]){
        return arr2[0] - arr1[0]
    }
    return arr1[1] - arr2[1];
}
var frequencySort = function(nums) {
    let pos = new Array(101).fill(0),neg = new Array(101).fill(0);
    let negFlag = false;
    nums.map(n => {
        if(n >= 0)
            pos[n]++;
        else{
            negFlag = true;
            neg[Math.abs(n)]++;
        }
    })
    
    let temp1 = [],temp2 = [];
    
    pos.map((p,i) => {
        if(p != 0){
            temp1.push([i,p]);
        }
    })
    
    if(negFlag){
       neg.map((p,i) => {
            if(p != 0){
                temp2.push([-i,p]);
            }
        }) 
    }
    
    let temp = [...temp1,...temp2];
    
    temp.sort(sortArr);
    
    console.log(temp);
    
    let ans = [];
    
    temp.map(t => {
        while(t[1] > 0){
            ans.push(t[0]);
            t[1]--;
        }
    });
    
    return ans;
    
    
};