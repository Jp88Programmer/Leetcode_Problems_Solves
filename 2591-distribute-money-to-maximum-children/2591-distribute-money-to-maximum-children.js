/**
 * @param {number} money
 * @param {number} children
 * @return {number}
 */
var f = (val) =>  Math.floor(val);
var distMoney = function(money, children) {
    money -= children;
      if(money < 0) return -1;
        
        if(f(money / 7) == children &&  f(money % 7) == 0)
            return children;
        if(f(money / 7) == children - 1 && f(money % 7) == 3)
            return children - 2;
        return Math.min(children-1,f(money/7));
};