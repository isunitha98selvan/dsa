'''
Given target sum and nums, list all possible combination of nums to form target sum.
'''

def howSum(target, nums):
    cache = {}
    def helper(target, nums):
        if target==0:
            return []
        if target in cache:
            return cache[target]
        if target<0:
            return None
        shortest_comb = None
        for num in nums:
            ans = howSum(target-num, nums)
            if ans!=None:
                combination = ans+[num]
                if shortest_comb is None or len(combination)<len(shortest_comb):
                    shortest_comb = combination
        cache[target] = shortest_comb
        return cache[target]
        
    return helper(target, nums)
        
target = 7
nums = [2,3,4,7]
print(howSum(target, nums))