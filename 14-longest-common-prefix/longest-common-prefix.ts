function longestCommonPrefix(strs: string[]): string {
    let pre = strs[0];
    let preLen = pre.length;

    for(let i = 1 ; i<strs.length; i++){
        let str = strs[i];
        while(pre != str.substr(0,preLen)){
            preLen--;
            if(preLen == 0)
                return "";
            pre = pre.substr(0,preLen);
        }
    }

    return pre;
};