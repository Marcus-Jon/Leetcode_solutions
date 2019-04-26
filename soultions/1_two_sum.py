# Given a list of numbers return the two numbers that add up to the target number.
class Solution(object):
    def twoSum(self, nums, target):

        x = 0
        end = False

        while x < len(nums):
            difference = target - nums[x]
            current = nums[x]

            y =0
            while y < len(nums):
                if nums[y] == difference and y != x:
                    end = True
                    if end == True:
                        break
                y = y + 1
            if end == True:
                break

            x = x + 1

        return [x, y]
