# Search Insert Position: 
# Given a sorted array of distinct integers and a target value, 
# return the index if the target is found. If not, return the index where it would be if it were inserted in order.
# -----------------------------------------------------------------------------------------------------------------

class Solution(object):
    def searchInsert(self, nums, target):
        l, r = 0, len(nums) - 1

        while l < r:
            m = (r + l) / 2
            if nums[m] == target:
                return m
            if target > nums[m]:
                l = m + 1
            if target < nums[l]:
                r = m - 1
            return l
