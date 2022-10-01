# Maximum Subarray 
# Return the Sum of Contiguous subarray which has largest sum 
def maxSubArraySum(a):
  
    cot =a[0]
    res=0
     
    for i in a:
        if res<0:
            res=0
        res+=i
        cot=max(cot,res)
    return cot
a = [5,-4,-2,6,-1]
print(maxSubArraySum(a))

# Time Complexity : O(n)
# Auxiliary Space : O(1)
