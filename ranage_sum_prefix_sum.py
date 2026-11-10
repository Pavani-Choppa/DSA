
def prefix_ready(arr):
  prefix = [0]*(len(arr)+1)
  for i in range(len(arr)):
    prefix[i+1] = prefix[i] + arr[i]
  return prefix
def range_sum(prefix,left,right):
  return f" sum of {left,right} is ---> {prefix[right+1] - prefix[left]}"

arr = [2, 4, 1, 3, 5]
prefix = prefix_ready(arr)
print(range_sum(prefix,1,3))
