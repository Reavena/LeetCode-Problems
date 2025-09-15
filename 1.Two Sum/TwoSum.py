class SolutionBF(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range (len(nums)):
            for j in range (1, len(nums)):
                if nums[j] ==  target - nums[i]:
                    return [i,j]
        return []

class SolutionTwoPass(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash = {}
        for i in range (len(nums)):
            hash[nums[i]] = i
        for j in range (len(nums)):
            comp = target - nums[j]
            if comp in hash and hash[comp]!=j:
                return [j,hash[comp]]
        return []

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hash = {}
        for i in range (len(nums)):
            comp = target - nums[i]
            if comp in hash and hash[comp]!=i:
                return [i,hash[comp]]
            hash[nums[i]] = i
        return []
