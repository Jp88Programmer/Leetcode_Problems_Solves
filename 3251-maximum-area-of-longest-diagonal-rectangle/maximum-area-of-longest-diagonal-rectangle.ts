function areaOfMaxDiagonal(dimensions: number[][]): number {
    let maxdi = Number.MIN_SAFE_INTEGER;
    let area = 0;
    dimensions.map((d,i) => {
        let di = d[0] * d[0] + d[1] * d[1];
        if(maxdi < di || (maxdi == di && area < d[0] * d[1])){
            maxdi = di;
            area = d[0] * d[1];
        }
    })

    return area;
};