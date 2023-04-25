/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    
    let roman = {
        "I"      :       1,
        "V"      :       5,
        "X"      :       10,
        "L"      :       50,
        "C"      :       100,
        "D"      :       500,
        "M"      :       1000,
    }
    
    let num = 0;
    for(let i = 0 ; i<s.length; i++){
        if(roman[s.charAt(i)] < roman[s.charAt(i+1)])
            num -= roman[s.charAt(i)];
        else
            num += roman[s.charAt(i)];
    }
    return num;
};