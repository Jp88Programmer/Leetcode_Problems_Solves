function findClosest(x: number, y: number, z: number): number {
    let dx = Math.abs(x-z);
    let dy = Math.abs(y-z);
    return dx == dy ? 0 : dx < dy ? 1 : 2;
};