class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        disx = abs(z-x)
        disy = abs(z-y)
        if disx < disy:
            return 1
        elif disx == disy:
            return 0
        else: 
            return 2
        