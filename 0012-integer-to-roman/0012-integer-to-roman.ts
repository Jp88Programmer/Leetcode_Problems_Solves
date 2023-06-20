function intToRoman(num: number): string {
    let ans = "";
        let vecc = []; 
        vecc.push([1000,"M"]);
        vecc.push([900,"CM"]);
        vecc.push([500,"D"]);
        vecc.push([400,"CD"]);
        vecc.push([100,"C"]);
        vecc.push([90,"XC"]);
        vecc.push([50,"L"]);
        vecc.push([40,"XL"]);
        vecc.push([10,"X"]);
        vecc.push([9,"IX"]);
        vecc.push([5,"V"]);
        vecc.push([4,"IV"]);
        vecc.push([1,"I"]);
        
        for(let i=0; i<13; i++){
            while(num>=vecc[i][0])
            {
                num -= vecc[i][0];
                ans += vecc[i][1];
            }
        }
        
        return ans;
};