function findClosest(x: number, y: number, z: number): number {
    let disx = Math.abs(z-x);
    let disy = Math.abs(z-y);
    return disx < disy ? 1 : disx == disy ? 0 : 2;
};