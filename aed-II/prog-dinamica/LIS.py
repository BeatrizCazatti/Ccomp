nums = [10, 9, 2, 5, 3, 7, 101, 18]
n = len(nums)

#memo = [1] * n

#bottom up: resolve as folhas e vai subindo
def liss(n):
    for i in range(n):
        for j in range(i):
            if nums[j] < nums[i]:
                memo[i] = max(memo[i], memo[j] + 1)
    return max(memo)


#top down: para cada índice, a LIS terminando nesse índice depende das LIS terminando nos índices anteriores.
def lis_top_down(n):
    memo = [-1] * n

    def lis(i):
        if memo[i] != -1:
            return memo[i]
        memo[i] = 1
        for j in range(i):
            if(nums[j] < nums[i]):
                memo[i] = max(memo[i], lis(j) + 1)
        return memo[i]
    max_lis = 0
    for i in range(n):
        max_lis = max(max_lis, lis(i))
    return max_lis

print(lis_top_down(n))