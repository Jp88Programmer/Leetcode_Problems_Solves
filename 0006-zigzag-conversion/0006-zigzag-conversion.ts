function convert(s: string, numRows: number): string {
    
    if(numRows == 1) return s;
    let arr : string[] = new Array(numRows).fill("");
    
    let neg : boolean = false;
    for(let i = 0,j=0; i < s.length; i++){
        
        if(!neg){
            arr[j++] += s[i];
        }else{
            arr[j--] += s[i];
        }
        
        if(j == numRows-1 || j == 0){
            neg = !neg;
        }
    }
    
    let str : string = "";
    for(let i = 0; i<numRows; i++){
        str += arr[i];
    }
    
    return str;
};