function divideString(s: string, k: number, fill: string): string[] {
    let arr = [],str = "";

    for(let i = 0; i<s.length; i++){
        str += s.charAt(i);
        if(str.length % k == 0){
            arr.push(str);
            str = "";
        }
    }

    if(str.length > 0){
        while(str.length % k != 0){
            str += fill;
        }
        arr.push(str);
    }

    return arr;
};