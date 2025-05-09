function reverseWords(s: string): string {
    var arr = s.split(" ");
    s = "";
    arr.reverse();
    for(let i = 0; i < arr.length ; i++){
        if(arr[i] != ''){
             s += arr[i] + " "; 
        }   
    }
    
    return s.substring(0,s.length-1);
};