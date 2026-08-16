def twopointer(nums, target):
    left,right  = 0, len(nums)  - 1
    while left < right:
        curr_sum  = nums[left] + nums[right]
        if curr_sum == target:
            return [left,right]
        elif curr_sum < target:
            left += 1
        else:
            right -= 1
    return []



nums  = [1, 2, 3, 4, 6]
target = 6
result = twopointer(nums, target)
print(result)  # Output: [1, 3]