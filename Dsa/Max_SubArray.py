class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = [0 for i in range(len(nums))]
        dp[0] = nums[0]
        for i in range(1, len(nums)):
            dp[i] = max(dp[i-1]+nums[i], nums[i])
        # print(dp)
        return max(dp)


nums = [-2, 1, -3, 7, -2, 2, 1, -5, 4]
ob1 = Solution()
print(ob1.maxSubArray(nums))
