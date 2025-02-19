function longestPalindrome(s: string): string {
     let mLen = 1;
    let start = 0;
    let n = s.length;
    for(let i = 1; i<s.length; i++){
        
        let low = i - 1;
        let high = i + 1;
        
        while(high < n && s[high] === s[i])
            high++;
        
        while(low>=0 && s[low] === s[i])
            low--;
        
        while(low >= 0 && high < n && s[low] === s[high]){
            low--;
            high++;
        }
        
        let len = high - low - 1;
        if(mLen < len){
            mLen = len;
            start = low + 1;
        }
    }
    
    return s.substr(start,mLen);
};