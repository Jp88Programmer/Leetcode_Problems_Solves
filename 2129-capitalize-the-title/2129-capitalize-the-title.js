/**
 * @param {string} title
 * @return {string}
 */
var capitalizeTitle = function(title) {
    
    let words = title.split(" ");
    let ans = "";
    words.map(w => {
        if(w.length <=2)
            ans += w.toLowerCase();
        else{
            // console.log(w.lowerCase())
            let arr = w.toLowerCase();
            ans += w.charAt(0).toUpperCase();
            ans += arr.substring(1);
        }
        ans += " ";
    })
    return ans.substring(0,ans.length-1);
};