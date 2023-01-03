class Solution(object):
    def minDeletionSize(self, A):
        """
        :type strs: List[str]
        :rtype: int
        """
        return sum(list(col) != sorted(col) for col in zip(*A))
        