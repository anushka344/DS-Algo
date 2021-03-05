class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        b=sorted(nums)
        c=len(nums)
        dup=0
        for i in range (0,c-1):
            if (b[i]==b[i+1]):
                dup=b[i];
                break;
        return dup