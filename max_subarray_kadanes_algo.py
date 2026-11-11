nums = [-2,1,-3,4,-1,2,1,-5,4]
sum = 0
maxSum = float('-inf')
ansStart = 1
ansEnd = 1

for num in range(len(nums)):
  if sum == 0:
    start = num
  sum += nums[num]
  # maxSum = max(maxSum, sum)
  if sum > maxSum:
    maxSum = sum
    ansStart = start
    ansEnd = num
  if sum < 0:
    sum = 0
    
print(maxSum)
print(nums[ansStart:ansEnd+1])
