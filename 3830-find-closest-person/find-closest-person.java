class Solution {
    public int findClosest(int x, int y, int z) {
        int disx = Math.abs(z-x);
        int disy = Math.abs(z-y);
        return disx < disy ? 1 : disx == disy ? 0 : 2;
    }
}