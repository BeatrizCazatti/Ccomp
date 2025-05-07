def twoSum(nums, target):
        for i in range(len(nums)):
            for j in range(len(nums)-1):
                if (nums[i] + nums[j] == target):
                    return[i, j]
            
print(twoSum([2,9,7,1], 8))
